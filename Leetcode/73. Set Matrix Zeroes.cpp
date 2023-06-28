#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int A[210][210];
        int i, j, k, n = matrix.size(), m = matrix[0].size();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    A[i][j] = 2;
                }
                else
                {
                    A[i][j] = 0;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(A[i][j]==2)
                {
                    for(k=0;k<m;k++)
                    {
                        matrix[i][k] = 0;
                    }
                    for(k=0;k<n;k++)
                    {
                        matrix[k][j] = 0;
                    }
                }
            }
        }
    }

int main()
{
    int n, m, i, j, x;
    cin >> n >> m;
    vector <vector<int>> matrix(n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin >> x;
            matrix[i].push_back(x);
        }
    }
    setZeroes(matrix);
}