#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

ll dp[10000], ans;
ll coin[] = {1, 7 , 10, 20, 50};

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
    ll t, n;
    cin >> t >> n;
    cout << bp(t, n) << endl;
    return 0;
}
