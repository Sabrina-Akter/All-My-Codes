//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string gameResult(string s)
    {
        map<pair<char, char>, char> mp = {{{'R', 'P'}, 'B'}, {{'P', 'R'}, 'A'}, {{'R', 'S'}, 'A'}, {{'S', 'R'}, 'B'}, {{'P', 'S'}, 'B'}, {{'S', 'P'}, 'A'}};
        if (s[0] == s[1]) 
        {
            return "DRAW";
        }
        else 
        {
            return string(1, mp[{s[0], s[1]}]);
        }
    }

};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.gameResult (s) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends