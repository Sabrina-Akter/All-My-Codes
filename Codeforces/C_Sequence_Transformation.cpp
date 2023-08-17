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
        ll n, i, j, x, mx=0, ans=LONG_LONG_MAX;
        cin >> n;
        unordered_map<ll, vector<ll>> m;
        for(i=0;i<n;i++)
        {
            cin >> x;
            mx = max(mx, x);
            m[x].pb(i);
        }
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            ll value = it->first;
            vector <ll> v = it->second;
            ll cnt=0;
            for(j=1;j<v.size();j++)
            {
                if(v[j]-v[j-1]>1)
                {
                    cnt++;
                }
            }
            if(v.size()>0)
            {
                if(v[0]!=0)
                {
                    cnt++;
                }
                if(v[v.size()-1]!=(n-1))
                {
                    cnt++;
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << nl;
    }
    return 0;
}