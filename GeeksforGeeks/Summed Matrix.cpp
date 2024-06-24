//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
  public:
    long long sumMatrix(long long n, long long q) 
    {
        if(n >= q) n = q - 1;
        long long x = q - n;
        long long ans = n - x + 1;
        if(ans < 0) ans = 0;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,q;
        
        cin>>n>>q;

        Solution ob;
        cout << ob.sumMatrix(n,q) << endl;
    }
    return 0;
}
// } Driver Code Ends