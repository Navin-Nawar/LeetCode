class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l=0,r=cardPoints.size()-1;
        int lefts=0;
        for(int i=0;i<k;i++){
            lefts+=cardPoints[i];
        }
        int mxsum=lefts;
        int rsum=0;
        for(int i=k-1;i>=0;i--){
            lefts-=cardPoints[i];rsum+=cardPoints[r];r--;
            mxsum=max(mxsum,lefts+rsum);
        }
        return mxsum;

    }
};