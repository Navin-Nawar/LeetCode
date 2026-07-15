class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {

        int l=0,h=letters.size()-1,mid=(l+h)/2;
        int ans=h;
        while(l<=h){
            mid=(l+h)/2;
             if((letters[mid]-target)>0){
            
            ans=min(ans,mid);
             }
            
            
            if ((letters[mid]-target)>0)h=mid-1;
            else l=mid+1;
            

        }
        if((letters[ans]-target)>0)return letters[ans];
        return letters[0];
    }
};