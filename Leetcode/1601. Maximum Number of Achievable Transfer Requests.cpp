#include <bits/stdc++.h>
using namespace std;
    vector <int> node[25];
    int visit[25][25];
    int temp_vis[25][25];
    bool ok;

    bool dfs(int start, int from, int to, int i, int j)
    {
        cout << start << " " << from << " " << to << " " << i << " " << j << " " << visit[i][j] << endl;
        temp_vis[i][j] = 1;
        if(start==to)
        {
            cout << "yes" << endl;
            ok = true;
            return ok;
        }
        for(int in=0;in<node[to].size();in++)
        {
            if((node[in].size()>0 && temp_vis[to][in]==0 && visit[to][in]==0))
            {
                return dfs(start, to, node[to][in], to, in);
                if(ok==true)
                {
                    visit[to][in]= 1;
                }
            }
        }
        return ok;
    }

    int maximumRequests(int n, vector<vector<int>>& requests) {
        memset(visit, 0, sizeof(visit));
        memset(temp_vis, 0, sizeof(temp_vis));
        int i, j, cnt=0;
        for(i=0;i<requests.size();i++)
        {
            node[requests[i][0]].push_back(requests[i][1]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<node[i].size();j++)
            {
                cout << node[i][j] << " ";
            }
            cout << endl;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<node[i].size();j++)
            {
                if(visit[i][j]==0)
                {
                    ok = false;
                    dfs(i, i, node[i][j], i, j);
                    if(ok==true)
                    {
                        visit[i][j]=1;
                        cout << "Ok" << endl;
                        cnt++;
                    }
                }
                memset(temp_vis, 0, sizeof(temp_vis));
            }
        }
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    vector<vector<int>> requests = {{0,1}, {1,0}, {0,1}, {1,2}, {2,0},{3,4}};
    int n = 5;
    maximumRequests(n, requests);
    return 0;
}
