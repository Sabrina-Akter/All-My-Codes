#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();
        vector <int> arr_row(row), arr_col(col);
        for(int i = 0; i < row; i++)
        {
            int one = 0;
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == 1)
                {
                    one++;
                }
            }
            arr_row[i] = one;
        }
        for(int i = 0; i < col; i++)
        {
            int one = 0;
            for(int j = 0; j < row; j++)
            {
                if(grid[j][i] == 1)
                {
                    one++;
                }
            }
            arr_col[i] = one;
        }
        vector <vector<int>> ans(row);
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                ans[i].push_back(arr_row[i] + arr_col[j] - (row - arr_row[i]) - (col - arr_col[j]));
            }
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}