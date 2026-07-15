class Solution {
public:
    int findMin(vector<int>& v) {
        int l=0,h=v.size()-1,mid;
        int ans=INT_MAX;
        while(l<=h){
            mid=(l+h)/2;
            ans=min(ans,v[mid]);
            if(v[l]==v[mid]&&v[mid]==v[h]){
                l++;h--;
            }
            else if(v[l]<=v[mid]){
                ans=min(ans,v[l]);
                l=mid+1;
            }
            else{
                ans=min(ans,v[mid]);
                h=mid-1;
            }
        }
        return ans;
    }
};