class Solution {
public:
    string reverseWords(string s) {
        int tmp = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                reverse(s.begin()+tmp, s.begin()+i);
                tmp=i+1;
            }
        }
        reverse(s.begin()+tmp, s.end());
        return s;
    }
};