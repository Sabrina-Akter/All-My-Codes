#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll coin[7]={11,111,1111,11111,111111,1111111,11111111};
map <ll, ll> dp;
ll ans;

ll bp(ll n, ll k)
{
    dp[0] = 0;
    ll i, j;
    for(i=1;i<=n;i++)
    {
        dp[i] = INT_MAX;
        for(j=0;j<k;j++)
        {
            if(coin[j]<=i)
            {
                ans = dp[i-coin[j]];
                dp[i] = min(dp[i], ans+1);
            }
        }
    }
    return dp[n];
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, a;
        cin >> n;
        a = bp(n, 7);
        if(a>1000000000)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
