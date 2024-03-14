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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector <int> ans;
        int last_zero = 0, last_one = 0;
        int mx = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                if(last_zero == 0)
                {
                    ans.pb(mx + 1);
                    mx++;
                    last_one = mx;
                }
                else
                {
                    ans.pb(last_zero);
                    last_zero--;
                }
            }
            else if(s[i] == '0')
            {
                if(last_one == 0)
                {
                    last_zero++;
                    ans.pb(last_zero);
                }
                else
                {
                    ans.pb(last_one);
                    last_one--;
                }
            }
            mx = max(mx, ans.back());
        }
        cout << mx << nl;
        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
    return 0;
}