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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // L, R, D, U, TR, BR, TL, BL
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  //

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        vll v(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        vll v2(m);
        for(ll i = 0; i < m; i++)
        {
            cin >> v2[i];
        }
        sort(v2.rbegin(), v2.rend());
        ll sum = 0;
        for(ll i = 0; i < n; i++)
        {
            if(i < m)
            {
                sum += v2[i];
            }
            else
            {
                sum += v[i];
            }
        }
        cout << sum << nl;
    }
    return 0;
}