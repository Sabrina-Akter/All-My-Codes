#include <bits/stdc++.h>
using namespace std;

    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        unordered_map <int, vector<int>> m;
        map <pair<int,int>, int > exist;
        int i, j, mx=0;
        for(i=0;i<roads.size();i++)
        {
            int x = roads[i][0], y = roads[i][1];
            exist[{min(x,y),max(x,y)}] = 1;
            mx = max(mx, x);
            mx = max(mx, y);
            m[x].push_back(y);
            m[y].push_back(x);
        }
        int ans=0, cnt;
        for(i=0;i<=mx;i++)
        {
            for(j=i+1;j<=mx;j++)
            {
                if(i!=j)
                {
                    cnt = m[i].size() + m[j].size();
                    if(exist[{min(i,j),max(i,j)}]==1)
                    {
                        cnt--;
                    }
                    ans = max(ans, cnt);
                }
            }
        }
        return ans;
    }

int main()
{
    int n = 2;
    vector<vector<int>> roads = {{1,0}};
    maximalNetworkRank(n, roads);
    return 0;
}