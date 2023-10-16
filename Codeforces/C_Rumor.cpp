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

#define N 100005
bool visited[N];
vector <ll> g[N];
ll sum=0, mn=LONG_LONG_MAX;
vll vec;

void dfs(ll node)
{
    mn = min(mn, vec[node-1]);
    visited[node]=1;
    ll i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visited[v]==0)
        {
            dfs(v);
        }
    }
}

int main()
{
    fastt;
    ll n, m, i, x, y, num;
    cin >> n >> m;
    for(i=0;i<n;i++)
    {
        cin >> num;
        vec.pb(num);
    }
    for(i=0;i<m;i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            mn=LONG_LONG_MAX;
            dfs(i);
            sum+=mn;
        }
    }
    cout << sum << nl;
    return 0;
}