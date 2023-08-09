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

ll lcm(ll a, ll b) 
{
    return (a / __gcd(a,b)) * b;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        if(n%3==0)
        {
            ll d = n/3;
            cout << d << " " << d << " " << d << nl;
        }
        else
        {
            if(n%2==0)
            {
                ll a=2, b=(n-2)/2, c=b;
                ll d=n/2, e=(n-(n/2))/2, f=e;
                ll x = lcm(a, b);
                x = lcm(x, c);
                ll y = lcm(d, e); 
                y = lcm(y, f);
                if(x<=n/2)
                {
                    cout << a << " " << b << " " << c << nl;
                }
                else if(y<=n/2)
                {
                    cout << d << " " << e << " " << f << nl;
                }
            }
            else
            {
                cout << 1 << " " << (n-1)/2 << " " << (n-1)/2 << nl;
            }
        }
    }
    return 0;
}
