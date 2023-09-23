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

const int INF = 1e9;

vector<pair<ll, ll> > adj[100001];
ll dist[100001];

void dijkstra(ll src)
{
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    pq.push({0, src});
    dist[src] = 0;
    while (!pq.empty())
    {
        ll u = pq.top().ss;
        pq.pop();
        for (auto x : adj[u])
        {
            ll v = x.ff;
            ll weight = x.ss;
            if (dist[v] > dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    fastt;
    ll t, cs=0;
    cin >> t;
    while (t--)
    {
        cs++;
        cout << "Case " << cs << ": " << nl;
        ll n, m, mid, q, u, v, w, i;
        cin >> n >> m >> mid >> q;
        for (i = 1; i <= m; i++)
        {
            cin >> u >> v >> w;
            adj[u].pb({v, w});
        }
        for (i = 0; i < q; i++)
        {
            int src, end;
            cin >> src >> end;
            for (int i = 1; i <= n; i++)
            {
                dist[i] = INF;
            }
            dijkstra(src);
            ll ans1 = dist[mid];
            if(ans1==INF)
            {
                cout << "Be seeing ya, John" << nl;
            }
            else
            {
                dijkstra(mid);
                ll ans2 = dist[end];
                if(ans2==INF)
                {
                    cout << "Be seeing ya, John" << nl;
                }
                else
                {
                    cout << ans1+ans2 << nl;
                }
            }
        }
        for(i = 1; i <= n; i++) {
            adj[i].clear();
        }
    }
    return 0;
}