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
        ll n, x, i, f=0;
        vll G[60];
        unordered_map <ll, ll> m, m2;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x<=n)
            {
                G[x].pb(i);
            }
            while(1)
            {
                if(x==0)
                {
                    break;
                }
                else
                {
                    m[x]++;
                    x = x/2;
                    if(x<=50)
                    {
                        G[x].pb(i);
                    }
                    // cout << x << nl;
                }
            }
        }
        vll v;
        for(i=1;i<=n;i++)
        {
            if(m[i]==1)
            {
                for(ll j=0;j<G[i].size();j++)
                {
                    if(m2[G[i][j]]==0)
                    {
                        m2[G[i][j]]=1;
                    }
                    else if(m2[G[i][j]]==1)
                    {
                        f=1;
                        break;
                    }
                }
            }
            else if(m[i]==0)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
        for(i=0;i<=60;i++)
        {
            G[i].clear();
        }
    }
    return 0;
}
