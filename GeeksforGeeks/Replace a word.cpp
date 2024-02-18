//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string replaceAll(string str, string oldW, string newW) 
    {
        string ans;
        for(int i = 0; i < str.size(); i++)
        {
            string temp = str.substr(i, oldW.size());
            if(temp == oldW)
            {
                ans += newW;
                i += oldW.size() - 1;
            }
            else
            {
                ans += str[i];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string S, oldW, newW;
        getline(cin, S);
        getline(cin, oldW);
        getline(cin, newW);
        Solution ob;
        cout << ob.replaceAll(S, oldW, newW) << endl;
    }
    return 0;
}

// } Driver Code Ends