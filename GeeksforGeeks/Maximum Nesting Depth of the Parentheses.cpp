//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    int maxDepth(string s) 
    {
        int depth = 0, maxDepth = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(') depth++;
            else if(s[i] == ')') depth--;
            maxDepth = max(maxDepth, depth);
        }
        return maxDepth;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends