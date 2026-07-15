class Solution {
public:
    int findKthPositive(vector<int>& v, int k) {

        
        int l=0,h=v.size()-1,mid;
        while(l<=h){
        mid=(l+h)/2;
        int missing = v[mid]-(mid+1);
        if (missing<k)l=mid+1;
        else h=mid-1;
    }
    return h+k+1;
    }
};