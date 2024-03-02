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
    ll n, f;
    cin >> n >> f;
    vector <pair<ll, ll> > v(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v));
    vll pref(n);
    ll sum = 0;
    for(ll i = 0; i < n; i++)
    {
        sum += v[i].second;
        pref[i] = sum;
    }
    vll ans;
    for(ll i = 0; i < n; i++)
    {
        ll search = v[i].first + f;
        auto it = ub(all(v), make_pair(search, 0LL));
        it--;
        if(i == 0) ans.pb(pref[it - v.begin()]);
        else ans.pb(pref[it - v.begin()] - pref[i - 1]);
    }
    cout << *max_element(all(ans)) << nl;
}