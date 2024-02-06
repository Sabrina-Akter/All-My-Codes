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

ll ans = 0;

void dfs(ll node, vll &vc, vector <bool> &visited, vector<vll> &g, ll k, ll sum)
{
    if(vc[node] == 0) sum = 0;
    else sum += 1;
    //cout << "node = " << node << ", sum = " << sum << nl;
    visited[node] = 1;
    ll i, v;
    for(i = 0; i < g[node].size(); i++)
    {
        v = g[node][i];
        if(visited[v] == 0)
        {
            if(sum + vc[v] <= k)
            {
                dfs(v, vc, visited, g, k, sum);
            }
        }
    }
    if(g[node].size() == 1 && node != 1) ans++;
}

int main()
{
    fastt;
    ll n, k, u, v;
    cin >> n >> k;
    vector <bool> visited(n + 1);
    vector<vll> g(n + 1);
    vll vc(n + 1);
    for(ll i = 1; i <= n; i++)
    {
        cin >> vc[i];
    }
    for(ll i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    dfs(1, vc, visited, g, k, 0);
    cout << ans << nl;
    return 0;
}