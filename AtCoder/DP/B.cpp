#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

ll ar[1000000];
ll dp[1000000];
ll k;

ll f(ll i, ll n )
{
    ll j;
    if( i == n )return 0;
    if( dp[i] != -1 )return dp[i];
    ll cost;
    cost = abs(ar[i] - ar[i+1]) + f(i+1, n);
    for(j=2;j<=k;j++)
    {
        if( i+j <= n )
        {
            cost = min(cost, abs(ar[i]-ar[i+j]) + f(i+j, n));
        }
    }
    return dp[i] = cost;
}

int main()
{
    ll n, i;
    cin >> n >> k;
    for( i = 1; i <= n; i++ )
    {
        cin >> ar[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << f(1, n);
}
