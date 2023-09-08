//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        vector<vector<ll>> v(n);
        ll i, j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    v[i].push_back(1);
                }
                else
                {
                    v[i].push_back((v[i-1][j-1]+v[i-1][j])%1000000007);
                }
            }
        }
        return v[n-1];
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends