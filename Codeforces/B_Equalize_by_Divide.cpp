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
        ll n, i;
        cin >> n;
        vector <pair<double, ll> > v(n);
        unordered_map <double, ll> m;
        for(i=0;i<n;i++)
        {
            cin >> v[i].first;
            v[i].second = i+1;
            m[v[i].first]++;
        }
        if(m.size()==1)
        {
            cout << 0 << nl;
        }
        else if(m[1]>=1 && m.size()>1)
        {
            cout << -1 << nl;
        }
        else
        {
            ll cnt=0;
            vector <pair<ll, ll> > ans;
            while(1)
            {
                
                sort(all(v));
                if(v[0].first==v[n-1].first)
                {
                    break;
                }
                v[n-1].first = ceil(v[n-1].first/v[0].first);
                cnt++;
                ans.push_back({v[n-1].second, v[0].second});
            }
            cout << cnt << nl;
            for(i=0;i<cnt;i++)
            {
                cout << ans[i].first << " " << ans[i].second << nl;
            }
        }
    }
    return 0;
}