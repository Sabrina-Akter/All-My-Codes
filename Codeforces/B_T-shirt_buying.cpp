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
    map <pair<ll, ll>, multiset <ll> > m;
    vector <ll> p, a, b; 
    ll i, t, x;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> x;
        p.pb(x);
    }
    for(i=0;i<t;i++)
    {
        cin >> x;
        a.pb(x);
    }
    for(i=0;i<t;i++)
    {
        cin >> x;
        b.pb(x);
    }
    for(i=0;i<t;i++)
    {
        ll mn = min(a[i], b[i]);
        ll mx = max(a[i], b[i]);
        m[{mn, mx}].insert(p[i]);
    }
    ll q;
    cin >> q;
    for(i=0;i<q;i++)
    {
        
    }
    return 0;
}