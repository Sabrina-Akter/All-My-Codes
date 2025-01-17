//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        int zero = 0, prod = 1;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == 0) zero++;
            else prod *= arr[i];
        }
        vector <int> ans(arr.size());
        for(int i = 0; i < arr.size(); i++)
        {
            if(zero > 1) ans[i] = 0;
            else if(zero == 1)
            {
                if(arr[i] != 0) ans[i] = 0;
                else ans[i] = prod;
            }
            else ans[i] = prod / arr[i];
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends