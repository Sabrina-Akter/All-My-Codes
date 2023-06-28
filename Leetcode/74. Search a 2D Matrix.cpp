#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i, j, flag=0;
        for(i=matrix.size()-1;i>=0;i--)
        {
            int a = matrix[i][0];
            if(target>=a)
            {
                for(j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]==target)
                    {
                        flag=1;
                        break;
                    }
                }
                break;
            }
        }
        if(flag==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

int main()
{
    vector<vector<int>> v = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int t = 3;

    searchMatrix(v,t);

    return 0;
}