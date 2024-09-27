//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) 
    {
        map <int, int> mp;
        vector <int> ans;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
            if(i == k - 1) ans.push_back(mp.rbegin()->first);
            else if(i >= k)
            {
                mp[arr[i - k]]--;
                if(mp[arr[i - k]] == 0) mp.erase(arr[i - k]);
                ans.push_back(mp.rbegin()->first);
            }
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
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends