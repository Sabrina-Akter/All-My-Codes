#include <bits/stdc++.h>
using namespace std;

//TC = O(row * col); row = |grid|, col = |grid[0]|
//SC = O(row * col)
int dx[] = {+0, +0, -1, +1};
int dy[] = {+1, -1, +0, +0};
class Solution 
{
public:
    bool isValid(int x, int y, int row, int col, vector<vector<char>>& grid)
    {
        if(x < 0 || y < 0 || x >= row || y >= col || grid[x][y] == '0') return false;
        return true;
    }
    void dfs(int ux, int uy, vector<vector<char>>& grid)
    {
        grid[ux][uy] = '0';
        for(int i = 0; i < 4; i++)
        {
            int vx = ux + dx[i];
            int vy = uy + dy[i];
            if(isValid(vx, vy, grid.size(), grid[0].size(), grid) == false) continue;
            dfs(vx, vy, grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();
        int cnt = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == '1')
                {
                    dfs(i, j, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main()
{
    

    return 0;
}