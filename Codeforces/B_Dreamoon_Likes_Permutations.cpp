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

ll f(vll &v, ll mx)
{
        set <ll> s1, s2;
        for(ll i = 0; i < v.size(); i++)
        {
            if(i < mx)
            {
                s1.insert(v[i]);
            }
            else
            {
                s2.insert(v[i]);
            }
        }
        ll x = 1;
        for(auto &it : s1)
        {
            if(it != x) return 0;
            x++;
        }
        x = 1;
        for(auto &it : s2)
        {
            if(it != x) return 0;
            x++;
        }
        if(s1.size() + s2.size() != v.size()) return 0;
        return 1;
}

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
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll mx = *max_element(all(v));
        ll okay1 = f(v, mx);
        reverse(all(v));
        ll okay2 = f(v, mx);
        if(okay1 + okay2 != 2)
        {
            cout << okay1 + okay2 << nl;
        }
        else if(okay1 + okay2 == 2)
        {
            if(n - mx == mx)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 2 << nl;
            }
        }
        if(okay2 == 1)
        {
            cout << n - mx << " " << mx << nl;
        }
        if(okay1 == 1 && n - mx != mx)
        {
            cout << mx << " " << n - mx << nl;
        }
    }
    return 0;
}