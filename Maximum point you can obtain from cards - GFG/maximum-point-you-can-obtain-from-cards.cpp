//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

        // code here
        class Solution {
  public:
    long long maxScore(vector<int> &cardPoints, int N, int k) {
       long long s=0;
       for(int i=N-k;i<N;i++)
       {
           s+=cardPoints[i];
       }
       long long sum=0;
       long long maxi=s;
       int i=0;
       while(k>0)
       {
           sum+=cardPoints[i];
           i++;
          s=s-cardPoints[N-k];
          k--;
          maxi=max(maxi,sum+s);
       }
       return maxi;
       
    }
};
  

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, k;
        cin >> N >> k;

        vector<int> cardPoints(N);
        for (int i = 0; i < N; i++) cin >> cardPoints[i];

        Solution obj;
        cout << obj.maxScore(cardPoints, N, k) << endl;
    }
    return 0;
}
// } Driver Code Ends