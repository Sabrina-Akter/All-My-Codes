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
        ll n, x, i;
        cin >> n;
    	ll ans1 = 0, ans2 = 0;
    	for(i = 0; i < n; i++) 
        {
    		cin >> x;
            ll ans3 = ans1 + x;
    		ll ans4 = ans2 + x;
    		ll ans5 = abs(ans1 + x);
    		ll ans6 = abs(ans2 + x);
    		ans1 = max(max(ans3, ans4), max(ans5, ans6));
    		ans2 = min(min(ans3, ans4), min(ans5, ans6));
    	}
        cout << max(abs(ans1), abs(ans2)) << nl;
    }
    return 0;
}