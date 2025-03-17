//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    bool equalPartition(vector<int>& arr) 
    {
        int n = arr.size();
        if(n == 1) return false;

        int sum = 0;
        for(int i = 0; i < n; i++) sum += arr[i];
        if(sum % 2 != 0) return false;
        
        int target = sum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true; 
    

        for (int i = 0; i < n; i++) 
        {
            for (int j = target; j >= arr[i]; j--) 
            {
                dp[j] = dp[j] || dp[j - arr[i]];
            }
        }
    
        return dp[target];        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        if (ob.equalPartition(arr))
            cout << "true\n";
        else
            cout << "false\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends