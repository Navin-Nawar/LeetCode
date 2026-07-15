class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,cnt0=0,cnt1=0,mxlen=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]==0){
                cnt0++;
            }
             if(cnt0<=k){
                cnt1=r-l+1;
                mxlen=max(cnt1,mxlen);
            }
           
            else if(cnt0>k){
                l++;
                if(nums[l-1]==0)cnt0--;
            }
           
        }
        return mxlen;
    }
};