#include<bits/stdc++.h>
using namespace std;

#define N 100000
bool visit[N];
vector <int> g[N];
long long prod = 1;
void dfs(int node)
{
    visit[node]=1;
    int i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            prod = prod*2;
            dfs(v);
        }
    }
}
int main()
{
    long long n, e, i, u, v;
    cin >> n >> e;
    for(i=0; i<e; i++)
    {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(i=1; i<=n; i++)
    {
        if(visit[i]==0)
        {
            dfs(i);
        }
    }
    cout << prod << endl;
    return 0;
}
