class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int pfsum=0,ans=0;
        for(int i=0;i<nums.size();i++){
            pfsum+=nums[i];
            if(mp.find(pfsum-k)!=mp.end())ans+=mp[pfsum-k];
            mp[pfsum]++;
        }
        return ans;
    }
};