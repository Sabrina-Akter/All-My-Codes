#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, v;
        cin >> n;
        for(i=2;i<=n;i++)
        {
            cin >> v;
            g[v].push_back(i);
            g[i].push_back(v);
        }
        for(i=1;i<=n;i++)
        {
            if(visit[i]==0)
            {
                dfs(i);
            }
        }
    }
    return 0;
}
