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

ll mod = 998244353;

int main()
{
    fastt;
    vll v(510);
    ll p=1, h;
    for(ll i=1;i<=500;i++)
    {
        p=((p%mod)*(i%mod))%mod;
        v[i] = p;
    }
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n&1)
        {
            cout << 0 << nl;
        }
        else
        {
            h = n/2;
            ll ans = ((v[h]%mod)*(v[h]%mod))%mod;
            if(n==2)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << ans << nl;
            }
        }
    }
    return 0;
}