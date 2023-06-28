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

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b, i, j, MN = LONG_LONG_MAX;
        string ans;
        cin >> a >> b;
        for(i=a;i<=b;i++)
        {
            ll mx = LONG_LONG_MIN, mn = LONG_LONG_MAX;
            string s = to_string(i);
            for(j=0;j<s.size();j++)
            {
                ll n = s[j] - '0';
                mx = max(mx, n);
                mn = min(mn, n);
            }
            if(mx-mn<MN)
            {
                MN = mx-mn;
                ans = s;
            }
        }
        cout << ans << nl;
    }
    return 0;
}