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
        ll n, m;
        cin >> n;
        vll v1(n), v2(n);
        for(int i = 0; i < n; i++) cin >> v1[i];
        map <ll, ll> present;
        for(int i = 0; i < n; i++)
        {
            cin >> v2[i];
            present[v2[i]] = 1;
        }
        cin >> m;
        vll d(m);
        map <ll, ll> mp;
        for(int i = 0; i < m; i++)
        {
            cin >> d[i];
            mp[d[i]]++;
        }
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(v1[i] != v2[i])
            {
                if(mp.count(v2[i]) && mp[v2[i]] > 0)
                {
                    mp[v2[i]]--;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(present.count(d[m - 1]) == 0) ok = false;
        if(ok) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}