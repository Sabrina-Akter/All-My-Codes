//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution 
{
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        sort(arr.begin(), arr.end());
        int ans = 0, need;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] >= target) continue;
            else
            {
                need = target - arr[i] - 1;
                auto it = upper_bound(arr.begin(), arr.begin() + i, need);
                //cout << arr[i] << " " << need << " " << it - arr.begin() << endl;
                ans += it - arr.begin();
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);
        cout << res << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends