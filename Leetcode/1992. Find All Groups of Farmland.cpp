#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int x[4] = {-1, +1, 0, 0};
    int y[4] = {0, 0, -1, +1};
    int last_x, last_y;
    void f(int row, int col, vector<vector<int>> &land, vector<vector<int>> &visited)
    {
        if(col > last_x || row > last_y)
        {
            last_x = max(last_x, row); 
            last_y = max(last_y, col);
        }
        visited[row][col] = 1;
        for(int i = 0; i < 4; i++)
        {
            if(row + x[i] < land.size() && row + x[i] >= 0 && col + y[i] < land[0].size() && col + y[i] >= 0 && land[row + x[i]][col + y[i]] == 1 && visited[row + x[i]][col + y[i]] == -1)
            {
                f(row + x[i], col + y[i], land, visited);
            }
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) 
    {
        vector<vector<int>> visited(305, vector<int>(305, -1));
        vector <vector <int>> ans;
        for(int i = 0; i < land.size(); i++)
        {
            for(int j = 0; j < land[0].size(); j++)
            {
                if(land[i][j] == 1 && visited[i][j] == -1)
                {
                    vector <int> temp = {i, j};
                    last_x = i, last_y = j;
                    f(i, j, land, visited);
                    temp.push_back(last_x);
                    temp.push_back(last_y);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}