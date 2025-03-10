#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)
#define pll pair<ll,ll>
#define plll pair<pll,ll>

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, a, mx = LONG_LONG_MIN, mn = LONG_LONG_MAX;
        cin >> n;
        vll v1(n+1), v2(n+1), p1(n+1), p2(n+1);
        v1[0] = 0, v2[0] = 0, p1[0] = 0, p2[0] = 0;
        for(i=1;i<=n;i++)
        {
            cin >> v1[i];
            p1[i]=p1[i-1]+v1[i];
        }
        for(i=1;i<=n;i++)
        {
            cin >> v2[i];
            p2[i]=p2[i-1]+v2[i];
        }
        for(i=1;i<=n;i++)
        {
            mx = max(p1[n]-p1[i], p2[i-1]);
            mn = min(mn, mx);
        }
        cout << mn << nl;
    }
    return 0;
}