class Solution {
public:
    int pivotInteger(int n) {
        int totSum = (n*(n+1))/2;
        int rightSum=0;
        int leftSum = totSum;
        for(int i=n;i>=1;--i){
            rightSum += i;
            if(leftSum == rightSum) return i;
            leftSum-=i;
        }
        return -1;
    }
};