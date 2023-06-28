#include <bits/stdc++.h>
using namespace std;

#define N 310
bool visit[N][N];
int row, col, ans=0;
vector<vector<char>> B;

void dfs(int x, int y)
{
    visit[x][y]=1;
    //1
    if(x-1>=0)
    {
        if(visit[x-1][y]==0 && B[x-1][y]=='1')
        {
            dfs(x-1,y);
        }
    }
    //2
    if(x+1<row)
    {
        if(visit[x+1][y]==0 && B[x+1][y]=='1')
        {
            dfs(x+1,y);
        }
    }
    //3
    if(y-1>=0)
    {
        if(visit[x][y-1]==0 && B[x][y-1]=='1')
        {
            dfs(x,y-1);
        }
    }
    //4
    if(y+1<col)
    {
        if(visit[x][y+1]==0 && B[x][y+1]=='1')
        {
            dfs(x,y+1);
        }
    }
}


int numIslands(vector<vector<char>>& grid) {
    int i, j; 
    row=grid.size(), col=grid[0].size();
    for(i=0;i<grid.size();i++)
        {
            vector<char>x;
            for(j=0;j<grid[i].size();j++)
            {
                x.push_back(grid[i][j]);
            }
            B.push_back(x);
        }
    for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {
                if(visit[i][j]==0 && B[i][j]=='1')
                {
                    ans++;
                    dfs(i,j);
                }
            }
        }
        return ans;  
    }


int main()
{
    vector<vector<char>> grid = {{'1','1','1','1','0'},{'1','1','0','1','0'},{'1','1','0','0','0'},{'0','0','0','0','0'}};
    numIslands(grid);
    return 0;
}