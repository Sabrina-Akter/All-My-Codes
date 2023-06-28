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
        ll n, i;
        cin >> n;
        vll v(n), x(n+1);
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            if(i==0)
            {
                x[0] = v[0];
            }
            else
            {
                x[i] = lcm(v[i], v[i-1]);
            }
        }
        x[n] = v[n-1];
        ll f=0;
        for(i=0;i<n;i++)
        {
            if(v[i]!=__gcd(x[i], x[i+1]))
            {
                f=1;
                break;
            }
        }
        if(f==0)
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