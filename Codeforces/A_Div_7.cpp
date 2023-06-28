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
    vll v;
    ll t, i;
    for(i=10;i<=999;i++)
    {
        if(i%7==0)
        {
            v.pb(i);
        }
    }
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n%7==0)
        {
            cout << n << nl;
        }
        else
        {
            ll rem = n/10;
            ll x = 10*rem;
            for(i=0;i<v.size();i++)
            {
                if(v[i]>x)
                {
                    cout << v[i] << nl;
                    break;
                }
            }
        }
    }
    return 0;
}