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

ll LCM(ll a, ll b)
{
    return a*b/__gcd(a,b);
}


int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i;
        cin >> n;
        vll a(n), b(n);
        for(i=0;i<n;i++)
        {
            cin >> a[i] >> b[i];
        }
        ll ans=1;
        ll lcm=1,gcd=0;
        for(int i=0;i<n;i++)
        {
            gcd=__gcd(gcd,a[i]*b[i]);
            lcm= LCM(lcm,b[i]);
            if(gcd%lcm!=0)
            {
                ans++;
                gcd=a[i]*b[i];
                lcm=b[i];
            }
        }
        cout << ans << nl;
    }
    return 0;
}
