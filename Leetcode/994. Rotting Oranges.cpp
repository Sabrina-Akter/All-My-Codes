#include <bits/stdc++.h>
using namespace std;

int visit[15][15];
int mx=0;

void dp(int i, int j, int sum, vector<vector<int>>& grid)
{
    mx = max(mx, sum);
    visit[i][j] = 1;
    if(i+1<grid.size() && grid[i+1][j]==1 && visit[i+1][j]==0)
    {
        dp(i+1, j, sum+1, grid);
        sum-=1;
    }
    if(i-1>=0 && grid[i-1][j]==1 && visit[i-1][j]==0)
    {
        dp(i-1, j, sum+1, grid);
        sum-=1;
    }
    if(j+1<grid[0].size() && grid[i][j+1]==1 && visit[i][j+1]==0)
    {
        dp(i, j+1, sum+1, grid);
        sum-=1;
    }
    if(j-1>=0 && grid[i][j-1]==1 && visit[i][j-1]==0)
    {
        dp(i, j-1, sum+1, grid);
        sum-=1;
    }
}

int orangesRotting(vector<vector<int>>& grid) {
    memset(visit, 0, sizeof(visit));
    int i, j;
    for(i=0;i<grid.size();i++)
    {
        for(j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]==2 && visit[i][j]==0)
            {
                dp(i, j, 0, grid);
            }
        }
    }
    for(i=0;i<grid.size();i++)
    {
        for(j=0;j<grid[0].size();j++)
        {
            if(grid[i][j]==1 && visit[i][j]==0)
            {
                return -1;
            }
        }
    }
    return mx;    
    }

int main()
{
    vector<vector<int>> grid = {{2,1,1}, {1,1,0}, {0,1,1}};
    orangesRotting(grid);
    return 0;
}