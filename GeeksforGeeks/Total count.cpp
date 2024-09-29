//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    int totalCount(int k, vector<int>& arr) 
    {
        double a, b = k, div;
        int sum  = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            a = arr[i];
            div = a / b;
            if(arr[i] % k != 0) sum += ceil(div);
            else sum += floor(div);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends