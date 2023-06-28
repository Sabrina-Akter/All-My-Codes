#include<bits/stdc++.h>
using namespace std;

#define N 100000
bool visit[N];
vector <long long> g[N];
long long sum=0;
vector <long long> store;

void dfs(long long node)
{
    sum++;
    visit[node]=1;
    long long i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            dfs(v);
        }
        else
        {
            store.push_back(sum);
        }
    }
}
int main()
{
    long long t, n, e, i, u, v;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n >> e;
        if(e==0)
        {
            cout << "1" << endl;
            continue;
        }
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
            sum = 0;
            if(visit[i]==0)
            {
                dfs(i);
            }
        }
        cout << *max_element(store.begin(), store.end()) << endl;
        for(i=0;i<=n;i++)
        {
            g[i].clear();
        }
        store.clear();
        fill(visit,visit+N,0);
    }
    return 0;
}
