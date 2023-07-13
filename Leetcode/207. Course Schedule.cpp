#include <bits/stdc++.h>
using namespace std;

map <int, bool> m;

void dfs(int node, vector<vector<int>>& graph)
{
    m[node] = false;
    int i, flag=0;
    for(i=0;i<graph[node].size();i++)
    {
        int x = graph[node][i];
        if(m.find(x)==m.end())
        {
            dfs(x, graph);
            if(m[x]==false)
            {
                flag=1;
            }
        }
        else
        {
            if(m[x]==false)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        m[node] = true;
    }
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int i, cnt=0;
        vector<vector<int>> graph(numCourses);
        for(i=0;i<prerequisites.size();i++)
        {
            int a = prerequisites[i][0], b = prerequisites[i][1];
            graph[a].push_back(b);
        }
        for(i=0;i<numCourses;i++)
        {
            if(m.find(i)==m.end())
            {
                dfs(i, graph);
                if(m[i]==true)
                {
                    cnt++;
                }
            }
            else
            {
                if(m[i]==true)
                {
                    cnt++;
                }
            }
        }
        if(cnt==numCourses)
        {
            cout << "true" << endl;
            return true;
        }
        else
        {
            cout << "false" << endl;
            return false;
        }
    }

int main()
{
    int numCourses = 4;
    vector<vector<int>> v = {{3,2},{2,1},{1,0},{1,3}};
    canFinish(numCourses, v);
    return 0;
}

