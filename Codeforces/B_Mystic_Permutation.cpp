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

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, f=0;
        cin >> n;
        vll v(n), v2;
        map <ll,ll> m;
        for(i=0;i<n;i++)
        {
            cin >> v[i];
            m[v[i]];
        }
        for(i=0;i<n;i++)
        {
            if(n==1)
            {
                cout << -1 << nl;
                f=1;
                break;
            }
            for(auto it=m.begin();it!=m.end();it++)
            {
                ll x = it->first;
                if(v[i]!=x)
                {
                    v2.pb(x);
                    m.erase(x);
                    break;
                }
            }
        }
        if(f==0)
        {
            if(v2.size()!=n)
            {
                auto it = m.begin();
                ll x = it->first;
                v2.pb(x);
                swap(v2[n-1],v2[n-2]);
            }
            
            for(i=0;i<n;i++)
            {
                cout << v2[i] << " ";
            }
        }
        cout << nl;
    }
    return 0;
}