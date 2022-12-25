class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(),carry=1;
        for(int i=n-1;i>=0;--i){
            int x = digits[i]+carry;
            digits[i]=x%10;
            carry = x/10;
            if(carry==0) break;
        }
        if(carry>0) digits.insert(digits.begin()+0,carry);
        return digits;
    }
};