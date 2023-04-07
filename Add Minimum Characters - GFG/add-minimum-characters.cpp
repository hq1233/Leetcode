//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int addMinChar(string str){    
        //code here
        int st=0;
        int en=str.size()-1;
        int ans=0;
        while(st<=en){
            if(str[st]==str[en]){
                st++;
                en--;
            }else{
                ans++;
                st=0;
                
                
              
                en=str.size()-1-ans;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends