#include <bits/stdc++.h>
using namespace std;

int visit[200010];
vector <int> g[200010];
int ans=0;

bool dfs(int node, int destination)
{
    if(node==destination)
    {
        return true;
    }
    visit[node]=1;
    int i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            if(v==destination)
            {
                ans = 1;
                return true;
            }
            else
            {
                dfs(v, destination);
            }
        }
        if(ans==1)
        {
            return true;
        }
    }
    return false;
}

bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int i, j;
        for(i=0;i<edges.size();i++)
        {
            int u = edges[i][0], v = edges[i][1];
            g[u].push_back(v);
            g[v].push_back(u);
        }
        return dfs(source, destination);
    }

int main()
{
    int n, source, dest;
    cin >> n >> source >> dest;
    vector<vector<int>> edges = {{4,3},{1,4},{4,8},{1,7},{6,4},{4,2},{7,4},{4,0},{0,9},{5,4}};
    cout << validPath(n, edges, source, dest);
    return 0;
}
