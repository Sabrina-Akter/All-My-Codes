#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
const int MAXM = 10005;

struct Edge {
    int to, cap, flow;
};

vector<int> adj[MAXN];
vector<Edge> edges;
int n, m, s, t;
int lower[MAXM], upper[MAXM];
int flow[MAXM];

void add_edge(int u, int v, int cap) {
    adj[u].push_back(edges.size());
    edges.push_back({v, cap, 0});
    adj[v].push_back(edges.size());
    edges.push_back({u, 0, 0});
}

bool bfs() {
    vector<int> dist(n+1, -1);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i : adj[u]) {
            int v = edges[i].to;
            int cap = edges[i].cap;
            int flow = edges[i].flow;
            if (dist[v] == -1 && flow < cap) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist[t] != -1;
}

int dfs(int u, int f) {
    if (u == t) return f;
    for (int i : adj[u]) {
        int v = edges[i].to;
        int cap = edges[i].cap;
        int flow = edges[i].flow;
        if (flow < cap && dist[v] == dist[u] + 1) {
            int df = dfs(v, min(f, cap - flow));
            if (df > 0) {
                edges[i].flow += df;
                edges[i^1].flow -= df;
                return df;
            }
        }
    }
    return 0;
}

int max_flow() {
    int mf = 0;
    while (bfs()) {
        while (int df = dfs(s, INT_MAX)) {
            mf += df;
        }
    }
    return mf;
}

int main() {
    cin >> n >> m;
    s = 0, t = n+1;
    int lb_sum = 0;
    for (int i = 1; i <= m; i++) {
        int u, v, l, h;
        cin >> u >> v >> l >> h;
        add_edge(u, v, h-l);
        add_edge(s, v, l);
        add_edge(u, t, l);
        lb_sum += l;
        lower[i] = l;
        upper[i] = h;
    }
    if (max_flow() != lb_sum) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    for (int i = 0; i < edges.size(); i += 2) {
        if (edges[i].flow > 0) {
            flow[i/2 + 1] = edges[i].flow + lower[i/2 + 1];
        }
    }
    for (int i = 1; i <= m; i++) {
        cout << flow[i] << "\n";
    }
    return 0;
}