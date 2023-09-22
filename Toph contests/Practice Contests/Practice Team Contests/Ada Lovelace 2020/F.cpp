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
        ll n, i;
        cin >> n;
        ll h, l, w, sum_h=0, sum_l=0, sum_w=0;
        ll mx1 = LONG_LONG_MIN, mx2 = LONG_LONG_MIN, mx3 = LONG_LONG_MIN;
        for(i=0;i<n;i++)
        {
            cin >> h >> l >> w;
            mx1 = max(mx1, h);
            mx2 = max(mx2, l);
            mx3 = max(mx3, w);
            sum_h+=h;
            sum_l+=l;
            sum_w+=w;
        }
        ll ans1, ans2, ans3, ans;
        ans1 = sum_h*mx2*mx3;
        ans2 = sum_l*mx1*mx3;
        ans3 = sum_w*mx1*mx2;
        ans = min(min(ans1, ans2), ans3);
        cout << ans << nl;
    }
    return 0;
}