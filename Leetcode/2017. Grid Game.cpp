#include <bits/stdc++.h>
using namespace std;

long long gridGame(vector<vector<int>>& grid) {
        long long top=0, bottom=0, i, T;
        for(i=0;i<grid[0].size();i++)
        {
            top+=grid[0][i];
            bottom+=grid[1][i];
        }

        long long sum1=0, sum2=0, mx=0, mn = LONG_LONG_MAX, save1, save2;
        for(i=0;i<grid[0].size();i++)
        {
            sum1+=grid[0][i];
            save1 = top-sum1;
            save2 = sum2;
            cout << save1 << " " << save2 << endl;
            mx = max(save1, save2);
            mn = min(mx, mn);
            sum2+=grid[1][i];
        }
        cout << mn << endl;
        return mn;
    }

int main()
{
    vector<vector<int>> grid = {{20,3,20,17,2,12,15,17,4,15}, {20,10,13,14,15,5,2,3,14,3}};
    gridGame(grid);
    return 0;
}