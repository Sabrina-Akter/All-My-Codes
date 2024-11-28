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
    long long two = 1, sum = 1;
    vll sums = {0, 1};
    for(int i = 1; i <= 17; i++)
    {
        two *= 2;
        sum += two;
        sums.pb(sum);
    }
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        unordered_map <char, ll> mp, mn;
        ll dist;
        for(int i = 0; i < s.size(); i++)
        {         
            if(mp.count(s[i]))
            {
                dist = i - mp[s[i]] - 1;
            }
            else
            {
                dist = i;
            }
            auto it = lb(all(sums), dist);
            mp[s[i]] = i;
            if(mn.count(s[i]))
            {
                if(it - sums.begin() > mn[s[i]]) mn[s[i]] = it - sums.begin();
            }
            else mn[s[i]] = it - sums.begin();
        }
        ll ans = LONG_LONG_MAX;
        for(auto &c : mp)
        {
           dist = s.size() - mp[c.first] - 1;
           auto it = lb(all(sums), dist);
           if(it - sums.begin() > mn[c.first]) mn[c.first] = it - sums.begin();
           ans = min(ans, mn[c.first]);
        }
        cout << ans << nl;
    }
    return 0;
}