//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    int dp[1001][1001];
    int rec(int i, int j, string &str, string &rev)
    {
       if(i == str.size() || j == rev.size()) return 0;
       if(dp[i][j] != -1) return dp[i][j];
       else if(str[i] == rev[j])
       {
           return dp[i][j] = 1 + rec(i + 1, j + 1, str, rev);
       }
       else
       {
           int choice1 = rec(i + 1, j, str, rev);
           int choice2 = rec(i, j + 1, str, rev);
           return dp[i][j] = max(choice1, choice2);
       }
    }
    int countMin(string str)
    {
        memset(dp, -1, sizeof(dp));
        string rev = str;
        reverse(rev.begin(), rev.end());
        int lcs = rec(0, 0, str, rev);
        return str.size() - lcs;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends