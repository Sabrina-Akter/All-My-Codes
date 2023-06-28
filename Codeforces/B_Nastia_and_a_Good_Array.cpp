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
        ll n, i, x=1999999973, y=1999999943, c=0;
        cin >> n;
        vll v(n), in1, in2, v1, v2;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(i=1;i<n;i++)
        {
            ll g = __gcd(v[i-1], v[i]);
            if(g!=1)
            {
                c++;
                in1.pb(i);
                in2.pb(i+1);
                v[i] = min(v[i-1], v[i]);
                if(c%2!=0)
                {
                    v[i-1] = x;
                }
                else
                {
                    v[i-1] = y;
                }
                v1.pb(v[i-1]);
                v2.pb(v[i]);
            }
        }
        cout << c << nl;
        for(i=0;i<c;i++)
        {
            cout << in1[i] << " " << in2[i] << " " << v1[i] << " " << v2[i] << endl;
        }
    }
    return 0;
}