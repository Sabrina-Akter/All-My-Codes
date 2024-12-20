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
        ll n, i;
        cin >> n;
        vll v(n), v2;
        map <ll, ll> mp;
        for(i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }
        sort(all(v));
        for(i = 0; i < n - 1; i++)
        {
            v2.pb(v[n - 1] - v[i]);
        }
        ll gcd;
        if(!v2.empty()) gcd = v2[0];
        else gcd = 1;
        for(i = 1; i < v2.size(); i++)
        {
            gcd = __gcd(gcd, v2[i]);
        }
        ll mx, x = v.back();
        while(1)
        {
            if(!mp.count(x))
            {
                v.pb(x);
                break;
            }
            x-=gcd;
        }
        sort(all(v));
        ll ans = 0;
        mx = v.back();
        for(i = 0; i < v.size(); i++)
        {
            ans += abs((mx - v[i]) / gcd);
        }
        cout << ans << nl;
    }
    return 0;
}