//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    vector<int> nearestPerfectSquare(int N) 
    {
        int near1 = sqrt(N);
        int near2 = near1 + 1;
        long long num1 = near1 * near1;
        long long num2 = near2 * near2;
        
        vector <int> ans;
        if(abs(N - num1) < abs(N - num2))
        {
            ans = {num1, abs(N - num1)};
        }
        else
        {
            ans = {num2, abs(N - num2)};            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends