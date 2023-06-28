#include <bits/stdc++.h>
using namespace std;

int x[210][210];
int mem[210][210];
int row, col;
int dp(int i, int j)
{
    if(i==row && j==col)
    {
        return mem[i][j] = x[i][j];
    }
    return mem[i][j] = x[i][j] + min(dp(i+1,j), dp(i,j+1));
}

int minPathSum(vector<vector<int>>& grid) {
       memset(x, INT32_MAX, sizeof(x)); 
       int i, j;
       row = grid.size()-1, col = grid[0].size()-1;
       for(i=0;i<grid.size();i++) 
       {
            for(j=0;j<grid[0].size();j++)
            {
                x[i][j] = grid[i][j];
            }
       }
       dp(0,0);
       for(i=0;i<grid.size();i++) 
       {
            for(j=0;j<grid[0].size();j++)
            {
                cout << mem[i][j] << " ";
            }
            cout << endl;
       }
       return 0;
    }

int main()
{
    vector <vector<int>> grid = {{1,3,1}, {1,5,1}, {4,2,1}};
    minPathSum(grid);
    return 0;
}