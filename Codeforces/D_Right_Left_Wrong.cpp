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
        vll v(n), pref(n);
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            pref[i] = sum;
        }
        string s;
        cin >> s;
        vector <pair<ll, ll>> p;
        ll l = 0, r = n - 1;
        while(l < r)
        {
            if(s[l] == 'L')
            {
                if(s[r] == 'R')
                {
                    p.pb({l, r});
                    l++;
                    r--;
                }
                else r--;
            }
            else l++;
        }
        ll ans = 0;
        for(auto &it : p)
        {
            if(it.first == 0) ans += pref[it.second];
            else ans += (pref[it.second] - pref[it.first - 1]);
        }
        cout << ans << nl;
    }
    return 0;
}