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
        ll a, b; 
        cin >> a >> b;
        string s; 
        cin >> s;
        vll g;
        ll cnt = 0; 
        ll flag = 0;
        for(ll p = 0; p < s.size(); p++)
        {
            if(s[p] == '1')
            {
                if(flag == 0)
                {
                    flag = 1;
                }
                else if(p > 0 && s[p - 1] == '0')
                {
                    g.push_back(cnt);
                }
                cnt = 0;
            }
            else if(s[p] == '0')
            {
                ++cnt;
            }
        }
        ll res = (a * flag);
        for(ll p = 0; p < g.size(); p++)
        {
            ll cur = g[p] * b;
            cur = (cur < a) ? cur : a;
            res += cur;
        }
        cout << res << nl;    
    }
    return 0;
}