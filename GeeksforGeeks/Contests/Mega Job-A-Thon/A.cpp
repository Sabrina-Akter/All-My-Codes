//{ Driver Code Starts
#include "bits/stdc++.h"
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int minimumMagic(int n, int m, vector<int> &price, vector<int> &magical_price)
    {
        vector <pair<int, int> > pair_v(n);
        vector <int> p1, p2;
        int i, sum1=0, sum2=0, mn=n;
        for(i=0;i<n;i++)
        {
            pair_v[i] = {price[i], magical_price[i]};
        }
        sort(pair_v.begin(), pair_v.end());
        for(i=0;i<n;i++)
        {
            sum1+=pair_v[i].first;
            p1.push_back(sum1);
            sum2+=pair_v[i].second;
            p2.push_back(sum2);
        }
        p2.push_back(0);
        for(i=0;i<n;i++)
        {
            if((p1[i]+(sum2-p2[i]))<=m)
            {
                mn = min(mn, n-(i+1));
            }
        }
        if(sum2>m)
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