//{ Driver Code Starts
#include "bits/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int mn = INT_MAX;
    int dp[100005];
    void f(int n, int m, vector<int> &price, vector<int> &magical_price, int ind, int sum, int cnt)
    {
        if(ind==n-1)
        {
            if(sum<=m)
            {
                mn = min(mn, cnt);
            }
        }
        else
        {
            if()
        }
    }
    int minimumMagic(int n, int m, vector<int> &price, vector<int> &magical_price)
    {
        memset(dp, -1, sizeof(dp));
        f(n, m, price, magical_price, -1, 0, 0);
        if(mn==INT_MAX)
        {
            return -1;
        }
        else
        {
            return mn;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>price(n),magical_price(n);
        for(int i=0;i<n;i++)
        {
            cin>>price[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>magical_price[i];
        }
        Solution ob;
        int ans=ob.minimumMagic(n,m,price,magical_price);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends