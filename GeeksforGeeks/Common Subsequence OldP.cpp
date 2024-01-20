//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution 
{
  public:
    int commonSubseq(string S1, string S2)
    {
        unordered_map <char, int> exist;
        for(auto &c : S1)
        {
            exist[c] = 1;
        }
        for(auto &c : S2)
        {
            if(exist.count(c) == true) return 1;
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1 >> S2;
        Solution ob;
        cout << ob.commonSubseq(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends