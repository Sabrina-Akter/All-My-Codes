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

ll fact(ll x)
{
    if(x == 0) return 1;
    return x * fact(x - 1);
}
ll func(ll n, ll r)
{
    ll p = 1,k = 1;
    if(n - r < r)
    {
        r = n - r;
    }
    for(ll i = 0; i < r; i++)
    {
        p *= (n - i);
        p /= (i + 1);
    }
    return p;
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    if(n == 2)
    {
        cout << "1" << endl;
    }
    else
    {
        ll ncr = func(n, n/2) / 2;
        ll fac = fact((n / 2) - 1);
        cout << (ncr * fac * fac) <<endl;
    }
    return 0;
}