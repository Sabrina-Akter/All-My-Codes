//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution 
{
    public:
        int RedOrGreen(int N,string S) 
        {
           int R = 0, G = 0;
           for(int i = 0; i < N; i++)
           {
               if(S[i] == 'R') R++;
               else G++;
           }
           return min(R, G);
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}
// } Driver Code Ends