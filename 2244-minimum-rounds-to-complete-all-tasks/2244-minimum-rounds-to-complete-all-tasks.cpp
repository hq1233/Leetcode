class Solution {
public:

    int minimumRounds(vector<int>& tasks) {

       unordered_map<int,int>mpp;
       int res = 0;

       for(auto &it : tasks) mpp[it]++;

       for(auto &it : mpp) 
       {
           if(it.second < 2) return -1;

           res+= (it.second / 3) + (it.second % 3 > 0);
       }

       return res;       
    }
};
