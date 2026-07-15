class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lb>=nums.size())return nums.size();
        if(nums[lb]==target)return lb;
        if(lb==0)return 0;
        return lb;
    }
};