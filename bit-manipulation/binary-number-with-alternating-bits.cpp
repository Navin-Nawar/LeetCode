class Solution {
public:
    bool hasAlternatingBits(int n) {
       long long allone=n^(n>>1);
      return(allone+1&allone)==0;
    }
};