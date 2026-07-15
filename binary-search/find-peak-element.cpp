class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int l=0,h=v.size()-1,mid;

        if(v.size()==1)return l;

        else if(v[l]>v[l+1])return l;
        else if(v[h]>v[h-1])return h;

        while(l<=h){
           mid=(l+h)/2;
           if(v[mid]>v[mid+1]&&v[mid]>v[mid-1])return mid;
           else if(v[mid]<v[mid+1]) l=mid+1;
           else h=mid-1;
        //    if(l==h)return h; 
        }
        return -1;
    }
};