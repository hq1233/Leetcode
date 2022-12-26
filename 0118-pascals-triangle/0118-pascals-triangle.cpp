class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> a(n);
        if(n==1)    return {{1}};
        a[0] = {1};
        a[1] = {1, 1};
        for(int i=2; i<n; i++){
            a[i].resize(i+1);
            a[i][0]=1;
            for(int j=1; j<i; j++){
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
            a[i][i]=1;
        }
        return a;
    }
};