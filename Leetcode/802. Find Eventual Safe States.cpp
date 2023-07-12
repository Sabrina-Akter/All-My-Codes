#include <bits/stdc++.h>
using namespace std;

    map <int, bool> m;

    void dfs(int node, vector<vector<int>>& graph)
    {
        int f=0, i;
        m[node] = false;
        for(i=0;i<graph[node].size();i++)
        {
            if(m.find(graph[node][i])==m.end())
            {
                dfs(graph[node][i], graph);
                if(m[graph[node][i]]==false)
                {
                    f=1;
                }
            }
            else
            {
                if(m[graph[node][i]]==false)
                {
                    f=1;
                }
            }
        }
        if(f==0)
        {
            m[node] = true;
        }
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector <int> ans;
        int i;
        for(i=0;i<graph.size();i++)
        {
            if(m.find(i)==m.end())
            {
                dfs(i, graph);
                if(m[i]==true)
                {
                    //cout << i << " ";
                    ans.push_back(i);
                }
            }
            else
            {
                if(m[i]==true)
                {
                    //cout << i << " ";
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }

int main()
{
    vector<vector<int>> graph = {{},{0,2,3,4},{3},{4},{}};
    eventualSafeNodes(graph);

    return 0;
}