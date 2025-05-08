//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution 
{
  public:
    int findMissing(vector<int> &arr) 
    {
        int mn = INT_MAX, n = arr.size();
        for(int i = 1; i < n; i++)
        {
            mn = min(mn, arr[i] - arr[i - 1]);
        }
        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i] + mn != arr[i + 1]) return arr[i] + mn;
        }
        return arr[n - 1] + mn;
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
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends