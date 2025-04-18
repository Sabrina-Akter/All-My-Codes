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
        double a, b, c, d, e, f;
        ll x, y, ans;
        cin >> a >> b >> c >> d;
        e = a/b, f = c/d;
        x = a/b, y = c/d;
        if(e==f)
        {
            ans = 0;
        }
        else if(((e!=x) && (f!=y)) && (e!=0 && f!=0))
        {
            ans = 2;
        }
        else
        {
            ans = 1;
        }
        cout << ans << nl;
    }
    return 0;
}