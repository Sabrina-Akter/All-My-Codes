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
        ll n, sub, add, ans = 0, last = 1, sum = 0, x;
        cin >> n >> sub >> add;
        vll v1(n), v2, v3;
        unordered_map <ll, ll> mp;
        for(ll i = 0; i < n; i++)
        {
            cin >> v1[i];
            mp[v1[i]]++;
            if(mp[v1[i]] == 1) v2.pb(v1[i]);
            else ans += sub;
        }
        sort(all(v2));
        n = v2.size() - 1;
        for(ll i = 0; i < v2.size(); i++)
        {
            x = ((n - i) * sub);
            sum += ((v2[i] - last) * add);
            v3.pb(sum + x);
            last = v2[i] + 1;
        }
        cout << min((((ll)v1.size() * sub) + add), *min_element(all(v3)) + ans) << nl;
    }
    return 0;
}