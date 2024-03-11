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

ll f(ll n)
{
    ll ten = 1000000000;
    ll sum = 0;
    while(1)
    {
        if(ten == 1) break;
        else
        {
            sum += (n / ten);
            ten /= 10;
        }
    }
    return sum;
}

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        ll l_sum = f(l);
        ll r_sum = f(r);
        ll dif = r_sum - l_sum;
        ll rem = r - l;
        cout << rem + dif << nl;
    }
    return 0;
}