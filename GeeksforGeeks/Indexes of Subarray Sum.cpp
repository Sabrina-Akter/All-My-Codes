//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> subarraySum(vector<int> &arr, int target) 
    {
        int n = arr.size(), sum = 0;
        map <int, int> mp;
        mp[0] = 0;
        vector <int> ans;
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            if(mp.count(sum - target))
            {
                ans.push_back(mp[sum - target] + 1);
                ans.push_back(i + 1);
                return ans;
            }
            if(mp.count(sum)) continue;
            mp[sum] = i + 1;
        }
        ans.push_back(-1);
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
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends