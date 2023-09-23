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

#define MAXN 100005

vector<pair<int, int> > v[MAXN];

ll dist[MAXN];

void dijkstra(int source, int n)
{
	for (ll i = 0; i < n; i++)
    {
        dist[i] = LONG_LONG_MAX;
    }

	bool vis[n];
	memset(vis, false, sizeof vis);

	dist[source] = 0;

	multiset<pair<ll, ll> > s;
	s.insert({ 0, source });

	while (!s.empty()) {
		pair<ll, ll> p = *s.begin();
		s.erase(s.begin());

		ll x = p.ss;
		ll wei = p.ff;
		if (vis[x])
        {
            continue;
        }
		vis[x] = true;

		for (ll i = 0; i < v[x].size(); i++) 
        {
			ll e = v[x][i].ff;
			ll w = v[x][i].ss;

			if (dist[x] + w < dist[e]) 
            {
				dist[e] = dist[x] + w;
				s.insert({ dist[e], e });
			}
		}
	}
}

void add_edge(ll s, ll t, ll weight)
{
	v[s].push_back({ t, weight });
}

ll solve(ll source, ll destination, ll intermediate, ll n)
{
	ll ans = LONG_LONG_MAX;
	dijkstra(source, n);

	ll dsource[n];
	for (ll i = 0; i < n; i++)
		dsource[i] = dist[i];

	dijkstra(destination, n);

	ll ddestination[n];
	for (ll i = 0; i < n; i++)
		ddestination[i] = dist[i];

	dijkstra(intermediate, n);

	ll dintermediate[n];
	for (ll i = 0; i < n; i++)
		dintermediate[i] = dist[i];

	for (ll i = 0; i < n; i++)
		ans = min(ans, dsource[i] + ddestination[i] + dintermediate[i]);

	return ans;
}

int main()
{
    fastt;
	ll n, m, x, q, i, u, v, w;
    cin >> n >> m >> x >> q;

    for(i=0;i<m;i++)
    {
        cin >> u >> v >> w;
        add_edge(u, v, w);
    }
    for(i=0;i<q;i++)
    {
        ll s, d;
        cin >> s >> d;
        cout << solve(s, d, x, n) << endl;
    }
	return 0;
}
