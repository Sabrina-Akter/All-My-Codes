//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> rearrange(const vector<int>& arr) 
    {
        unordered_map <int, int> mp;
        for(int i = 0; i < arr.size(); i++) mp[arr[i]] = 1;
        vector <int> ans(arr.size());
        for(int i = 0; i < arr.size(); i++)
        {
            if(mp.count(i)) ans[i] = i;
            else ans[i] = -1;
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
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution solution;
        vector<int> ans = solution.rearrange(arr);

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends