#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define N 100000

ll ar[1000000];
ll dp[1000000];
ll sum = 0;

ll f(ll i, ll n )
{
    sum++;
    ///cout << sum << ". dp[" << i << "] = " << dp[i] << endl;
    if( i == n )return 0;
    ///cout << "Yes 1" << endl;
    if( dp[i] != -1 )return dp[i];
    ///cout << "Yes 2" << endl;
    ll cost = abs(ar[i] - ar[i+1]) + f(i+1, n);
    ///cout << "Yes 3" << endl;
    if( i+2 <= n )
    {
        ///cout << "Yes 4" << endl;
        cost = min(cost, abs(ar[i]-ar[i+2]) + f(i+2, n));
    }
    ///cout << "Yes 5" << endl;
    ///cout << "dp[" << i << "] = " << cost << endl;
    return dp[i] = cost;
}

int main()
{
    ll n, i;
    cin >> n;
    for( i = 1; i <= n; i++ )
    {
        cin >> ar[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << f(1, n);
}
