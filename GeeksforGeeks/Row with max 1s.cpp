//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution 
{
  public:
    int rowWithMax1s(vector<vector<int> > &arr) 
    {
        int mn = INT_MAX;
        int ans = -1;
        for(int i = 0; i < arr.size(); i++)
        {
            auto it = lower_bound(arr[i].begin(), arr[i].end(), 1);
            if(it != arr[i].end())
            {
                int pos = it - arr[i].begin();
                if(pos < mn)
                {
                    ans = i;
                    mn = pos;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends