class Solution {
public:
    int majorityElement(vector<int>& v) {
        unordered_map<int,int>mp;

        for(int i=0;i<v.size();i++)mp[v[i]]++;
        int mx=0,ans;

        for(auto it:mp){
            int a=it.second;
            if(a>mx){
                mx=a;
                ans=it.first;
            }
        }
        return ans;

    }
};