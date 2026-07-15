class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int l=0,len=0,mxlen=0,mxfr=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]-'A']++;
            mxfr=max(mxfr,freq[s[r]-'A']);
            len=r-l+1;
            if(len-mxfr<=k)mxlen=max(mxlen,len);
            else{
                freq[s[l]-'A']--;
                l++;
            }
        }
        return mxlen;
    }
};