class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
        int lb=lower_bound(v.begin(),v.end(),target)-v.begin();
        int ub=upper_bound(v.begin(),v.end(),target)-v.begin();
        int z=v.size()-1;
        if(lb>=v.size())return{-1,-1};
        if(ub>=v.size())return{lb,z};
        if(v[lb]!=target)return{-1,-1};
        return{lb,ub-1};
    }
};