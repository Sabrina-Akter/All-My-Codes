//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


// } Driver Code Ends

class Solution 
{
  public:
    vector <int> memo;
    
    int f(vector<int>& arr, int i)
    {
        if(i < 0) return 0;
        if(memo[i] != -1) return memo[i];
        return memo[i] = max(f(arr, i - 2) + arr[i], f(arr, i - 1));
    }  
  
    int findMaxSum(vector<int>& arr) 
    {
        int n = arr.size();
        memo.resize(n + 1, -1);
        return f(arr, n - 1);
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
        cout << ob.findMaxSum(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends