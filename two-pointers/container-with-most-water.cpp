
class Solution {
public:
    int maxArea(vector<int>& height) {
        long long l=0,r=height.size()-1;
        long long ans=0;
        for(long long i=0;i<height.size()-1;i++){
            long long p=(r-l)*min(height[r],height[l]);
            ans=max(ans,p);
            if(height[r]<height[l])r--;
            else l++;
        }
        return ans;
    }
};