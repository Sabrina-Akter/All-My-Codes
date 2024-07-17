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
        unordered_map <ll, ll> mp;
        for(ll i = 0; i < n; i++)
        {
            cin >> v[i];
            while(v[i] != 0)
            {
                if((v[i] <= n) && (mp.count(v[i]) == false))
                {
                    mp[v[i]] = 1;
                    break;
                }
                else
                {
                    v[i] /= 2;
                }
            }
        }
        bool ok = true;
        for(ll i = 1; i <= n; i++)
        {
            if(mp.count(i) == false)
            {
                ok = false;
                break;
            }
        }
        if(ok == true) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}