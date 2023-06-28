#include<bits/stdc++.h>
using namespace std;

#define N 100000
bool visit[N];
vector <int> g[N];

void dfs(int node)
{
    visit[node]=1;
    int i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            dfs(v);
        }
    }
}
int main()
{
    long long t, n, e, i, u, v;
    while(cin >> n >> e)
    {
        if(n==0 && e==0)
        {
            break;
        }
        for(i=0;i<e;i++)
        {
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(i=1;i<=n;i++)
        {
            if(visit[i]==0)
            {
                dfs(i);
            }
        }
        for(i=0;i<=N;i++)
        {
            g[i].clear();
        }
        fill(visit,visit+N,0);
    }
    return 0;
}
