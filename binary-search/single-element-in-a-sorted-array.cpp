class Solution {
public:
    int singleNonDuplicate(vector<int>& v) {
        long long mid,l=0,h=v.size()-1;
        while(l<=h){
            mid=(l+h)/2;
            if(mid==l&&mid==h)return v[mid];
            if(mid==0|| mid==v.size()-1)return v[mid];
        if(v[mid]!=v[mid-1]&&v[mid]!=v[mid+1])return v[mid];
        else if(mid%2==0&&v[mid]==v[mid+1])l=mid+1;
        else if(mid%2!=0&&v[mid]==v[mid-1])l=mid+1;
        else h=mid-1;
        }
        return -1;
    }
};