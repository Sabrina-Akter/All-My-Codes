//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    int findUnique(vector<int> &arr) 
    {
        sort(arr.begin(), arr.end());
        int last = arr[0], sum = arr[0];
        for(int i = 1; i < arr.size(); i++)
        {
            if(i % 2 == 0)
            {
                sum += arr[i];
                last = arr[i];
            }
            else
            {
                sum -= arr[i];
                if(sum != 0) return last;
            }
        }
        return last;
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
        int ans = ob.findUnique(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends