#include <bits/stdc++.h>
using namespace std;

vector <int> g[20];

void dfs(int node, int des)
{
    int i, v;
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        cout << "node = " << node << " v = " << v << endl;
        dfs(v, des);
    }
}

vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int source = 0, des = graph.size()-1, i, j;
        for(i=0;i<graph.size();i++)
        {
            for(j=0;j<graph[i].size();j++)
            {
                g[i].push_back(graph[i][j]);
            }
        }
        dfs(source, des);
        return graph;
    }

int main()
{
    vector<vector<int>> v={{4,3,1},{3,2,4},{3},{4},{}};
    allPathsSourceTarget(v);
    return 0;
}
