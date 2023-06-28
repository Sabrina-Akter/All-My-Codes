#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), i, j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                swap(matrix[i][j], matrix[j][i]);
                cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << endl;
            }
            cout << endl;
        }
        for(i=0;i<n;i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

int main()
{
    vector<vector<int>> v = {{5,1,9,11}, {2,4,8,10}, {13,3,6,7}, {15,14,12,16}};
    rotate(v);
    return 0;
}