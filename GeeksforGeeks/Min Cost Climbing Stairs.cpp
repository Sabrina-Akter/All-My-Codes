//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//Back-end complete function Template for C++

class Solution 
{
  public:
    int f(int i, vector<int>& cost, vector<int>& dp) 
    {
        if (i >= cost.size()) 
        {
            return 0;
        }
        if (dp[i] != INT_MAX) 
        {
            return dp[i]; 
        }
        dp[i] = cost[i] + min(f(i + 1, cost, dp), f(i + 2, cost, dp));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        vector<int> dp(n + 1, INT_MAX);
        int result = min(f(0, cost, dp), f(1, cost, dp));
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t-- > 0) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution sln;
        int res = sln.minCostClimbingStairs(arr);
        cout << res << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends