class Solution {
public:
    bool search(vector<int>& v, int target) {
        
        int l=0,h=v.size()-1,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(v[mid]==target)return true;
            else if(v[l]==v[mid]&&v[mid]==v[h]){
                l++;h--;
            }
            else if(v[l]<=v[mid]){
                if(v[l]<=target&&target<v[mid])h=mid-1;
                else l=mid+1;
            }
            else  {
                if(v[h]>=target&&target>v[mid])l=mid+1;
                else h=mid-1;
            }
            
        }
        return false;
    }
};