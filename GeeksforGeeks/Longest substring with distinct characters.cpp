//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    int longestUniqueSubstr(string &s) 
    {
        map <char, int> mp;
        int length, last = -1, ans = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(mp.count(s[i]))
            {
                last = max(mp[s[i]], last);
            }
            length = i - last;
            ans = max(ans, length);
            mp[s[i]] = i;
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends