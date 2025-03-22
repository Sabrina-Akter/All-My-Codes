//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    int f(const vector<int>& arr, int start, int end) 
    {
        int prev2 = 0, prev1 = 0;
    
        for (int i = start; i <= end; i++) 
        {
            int pick = arr[i] + prev2;
            int skip = prev1;
            int curr = max(pick, skip);
            prev2 = prev1;
            prev1 = curr;
        }
    
        return prev1;
    }
    int maxValue(vector<int>& arr) 
    {
        int n = arr.size();
        if (n == 1) return arr[0];
    
        int case1 = f(arr, 0, n - 2); 
        int case2 = f(arr, 1, n - 1); 
    
        return max(case1, case2);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        int res;
        res = ob.maxValue(arr);
        cout << res << "\n"
             << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends