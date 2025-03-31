//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    int maxPartitions(string &s) 
    {
        int n = s.size(); 
        unordered_map <int, int> first, last;
        for(int i = 0; i < n; i++)
        {
            if(first.count(s[i]) == 0) first[s[i]] = i;
            last[s[i]] = i;
        }
        vector <int> ans;
        int f, l;
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                f = first[s[i]];
                l = last[s[i]];
            }
            else
            {
                if(first[s[i]] > l && last[s[i]] > l)
                {
                    ans.push_back(l - f + 1);
                    f = first[s[i]];
                    l = last[s[i]];
                }
                else
                {
                    l = max(l, last[s[i]]);
                }
            }
        }
        ans.push_back(l - f + 1);
        return ans.size();
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;

    for (int i = 0; i < tc; ++i) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.maxPartitions(s) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends