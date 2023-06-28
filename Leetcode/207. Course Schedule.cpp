#include <bits/stdc++.h>
using namespace std;

#define N 2010
bool visit[N];
vector <int> g[N];
bool ans = true;
map <int, int> m;

void dfs(int node)
{
    visit[node]=1;
    int i, v;
    if(g[node].size()==0)
    {
        m[node] = 1;
    }
    for(i=0;i<g[node].size();i++)
    {
        v = g[node][i];
        if(visit[v]==0)
        {
            dfs(v);
        }
    }
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int i, u, v;
        for(i=0;i<numCourses;i++)
        {
            m[numCourses] = 1;
        }
        for(i=0;i<prerequisites.size();i++)
        {
            u = prerequisites[i][0];
            v = prerequisites[i][1];
            if(u==v)
            {
                return false;
            }
            m[u] = 0, m[v] = 0;
            g[u].push_back(v);
        }
        for(i=0;i<numCourses;i++)
        {
            if(visit[i]==0)
            {
                dfs(i);
            }
        }
        while(1)
        {
            int cnt=0;
            for(i=0;i<prerequisites.size();i++)
            {
                u = prerequisites[i][0];
                v = prerequisites[i][1];
                if(m[v]==1 && m[u]==0)
                {
                    cnt++;
                    m[u] = 1;
                }
            }
            if(cnt==0)
            {
                break;
            }
        }
        for(i=0;i<numCourses;i++)
        {
            if(m[ans]==0)
            {
                ans = false;
                break;
            }
        }
        cout << ans << endl;
        return ans;    
    }

int main()
{
    int numCourses = 3;
    vector<vector<int>> v = {{1,0},{1,2},{0,1}};
    canFinish(numCourses, v);
    return 0;
}

