class Solution {
public:
    int addDigits(int num) {
        int ans=0,ans3=0;
        while(num>0){
            int vagsesh=num%10;
            ans+=vagsesh;
            num=num/10;
            
        }

          while(ans>0){
            int vagsesh=ans%10;
            ans3+=vagsesh;
            ans=ans/10;
            
        }
        return ans3;
    }
};