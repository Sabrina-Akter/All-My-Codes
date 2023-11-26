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
        vll v(n);
        vector <pair<ll, ll>> v2;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i] < i+1) v2.pb({v[i], i+1});
        }
        sort(all(v2));
        vll v3;
        for(int i = 0; i < v2.size(); i++)
        {
            ll first = v2[i].first;
            v3.pb(first);       
        }
        ll x = v2.size();
        ll sum = 0;
        for(int i = 0; i < v2.size(); i++)
        {
            ll second = v2[i].second;
            auto it = ub(all(v3), second);
            if(it != v3.end())
            {
                ll pos = it - v3.begin();
                sum += x - pos;
            }
        }
        cout << sum << nl;
    }
    return 0;
}