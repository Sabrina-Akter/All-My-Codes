//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    int minimumSum(string s) 
    {
        int left = 0;
        int right = s.size() - 1;
        vector <char> v;
        while(left <= right)
        {
            if((s[left] != '?' && s[right] != '?') && (s[left] != s[right])) return -1;
            if(s[left] != '?') 
            {
                if(v.size() == 0 || v.back() != s[left]) v.push_back(s[left]);
            }
            if(s[right] != '?') 
            {
                if(v.size() == 0 || v.back() != s[right]) v.push_back(s[right]);
            }
            left++;
            right--;
        }
        int dif = 0;
        for(int i = 1; i < v.size(); i++)
        {
            dif += abs(v[i] - v[i - 1]);
        }
        return dif * 2;
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
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends