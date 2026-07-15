class Solution {
public:
    int search(vector<int>& v, int target) {
        int h=v.size()-1,l=0,mid;
        while(l<=h){
            mid=(h+l)/2;
            if(v[mid]==target)return mid;
            else if(v[mid]>target){
                h=mid-1;
            }
            else l=mid+1;
        }
        return -1;
    }
};