class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        size_t sz = A.size();
        assert(sz == queries.size());
        vector<int> res(sz, 0);
        
        int sum = 0;
        for (auto i = 0; i < sz; ++i) 
            if (A[i]%2 == 0)
                sum += A[i];
        
        for (size_t i = 0; i < sz; ++i) {
            auto val = queries[i][0];
            auto index = queries[i][1];
            if (A[index]%2 == 0)
                sum -= A[index];
            A[index] += val;            
            res[i] = A[index]%2 == 0 ? sum+=A[index] : sum;
        }
        return res;
    }
};