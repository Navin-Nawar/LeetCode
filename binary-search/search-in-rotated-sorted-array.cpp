class Solution {
public:
    int search(vector<int>& v, int target) {
        int l=0,h=v.size()-1,mid;
        while(l<=h){
            mid=(h+l)/2;
            if(v[mid]==target)return mid;
            else if(v[l]<=v[mid]){
                if(v[l]<=target&&target<v[mid])h=mid-1;
                else l=mid+1;
            }
            else {
                if(v[h]>=target&&target>v[mid])l=mid+1;
                else h=mid-1;
            }
        }
        return -1;
    }
};