#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int row = mat.size();
        int col = mat[0].size();
        vector <int> arr_row(row), arr_col(col);
        for(int i = 0; i < row; i++)
        {
            int one = 0;
            for(int j = 0; j < col; j++)
            {
                if(mat[i][j] == 1)
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
                if(mat[j][i] == 1)
                {
                    one++;
                }
            }
            arr_col[i] = one;
        }
        int cnt = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(mat[i][j] == 1 && arr_row[i] == 1 && arr_col[j] == 1)
                {
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