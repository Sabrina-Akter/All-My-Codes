//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution 
{
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        map <int, int> mp;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(mp.count(target - arr[i])) ans += mp[target - arr[i]];
            mp[arr[i]]++;
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
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends