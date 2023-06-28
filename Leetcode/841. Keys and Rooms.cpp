#include <bits/stdc++.h>
using namespace std;

vector <int> g[1010];
bool visit[1010];

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


bool canVisitAllRooms(vector<vector<int>>& rooms) {
        memset(g, 0, sizeof(g));
        int i, j;
        for(i=0;i<rooms.size();i++) 
        {
            for(j=0;j<rooms[i].size();j++)
            {
                g[i].push_back(rooms[i][j]);
            }
        } 
        dfs(0);  
        for(i=0;i<rooms.size();i++) 
        {
            if(visit[i]==0)
            {
                return 0;
            }
        }
        return 1; 
    }

int main()
{
    vector<vector<int>> v = {{1}, {2}, {3}, {}};
    canVisitAllRooms(v);
    return 0;
}