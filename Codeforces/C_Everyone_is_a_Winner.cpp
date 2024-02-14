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
        ll n, div1, div2, size;
        cin >> n;
        set <ll> ans;
        for(ll i = 1; i <= n; i++)
        {
            size = ans.size();
            div1 = n / i;
            ans.insert(div1);
            if(size == ans.size()) break;
            div2 = n / (div1 + 1);
            ans.insert(div2);
        }
        cout << ans.size() << nl;
        for(auto &it : ans) cout << it << " ";
        cout << nl;
    }
    return 0;
}