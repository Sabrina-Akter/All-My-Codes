//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    string maxOdd(string s) 
    {
        int last_odd = -1;
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] - '0') % 2 != 0) last_odd = i;
        }

        string ans;
        for(int i = 0; i <= last_odd; i++)
        {
            ans += s[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends