class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0,cnt=0;
        for(int i=0;i<t.size();i++){
            if(s[l]==t[i]){
                cnt++;l++;
            }
        }
        if(cnt==s.size())return true;
        return false;
    }
};