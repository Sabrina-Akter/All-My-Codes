#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

vector<vector<pair<int, int>>> G;
int t, n, a, b, s;

void dfs(int u, int p, int a, int b)
{
    s = max(s, b);
    
    for (auto [v, c] : G[u])
    {
        if (v != p)
        {
            dfs(v, u, c, b + (c > a));
        }
    }
}

int main()
{
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        G.clear();
        G.resize(n + 1);

        s = 1;
        
        while (--n)
        {
            cin >> a >> b;
            G[a].emplace_back(b, n);
            G[b].emplace_back(a, n);
        }

        dfs(1, 0, G.size(), 1);
        
        cout << s << '\n';
    }

    return 0;
}