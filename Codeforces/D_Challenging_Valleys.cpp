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
        ll n, x, i, cnt=0;
        cin >> n;
        vll v;
        v.pb(LONG_LONG_MAX);
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x!=v[v.size()-1])
            {
                v.pb(x);
            }
        }
        v.pb(LONG_LONG_MAX);
        for(i=1;i<v.size()-1;i++)
        {
            ll l = v[i-1], m = v[i], r = v[i+1];
            if(l>m && m<r)
            {
                cnt++;
            }
        }
        if(cnt==1)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}