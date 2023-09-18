#include <bits/stdc++.h>
using namespace std;

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int row = mat.size(), col = mat[0].size(), i, j, soldier;
        vector <pair<int, int> > p;
        for(i=0;i<row;i++)
        {
            soldier = 0;
            for(j=0;j<col;j++)
            {
                if(mat[i][j]==1)
                {
                    soldier++;
                }
            }
            p.push_back({soldier, i});
        }
        sort(p.begin(), p.end());
        vector <int> ans;
        for(i=0;i<k;i++)
        {
            ans.push_back(p[i].second);
        }
        
        return ans;
    }

int main()
{
    vector<vector<int>> mat = {{1,1,0,0,0},{1,1,1,1,0},{1,0,0,0,0},{1,1,0,0,0},{1,1,1,1,1}};
    int k = 3;
    kWeakestRows(mat, k);

    return 0;
}