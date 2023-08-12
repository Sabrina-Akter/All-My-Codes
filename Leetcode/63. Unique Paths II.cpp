#include <bits/stdc++.h>
using namespace std;

    map<pair<int, int>, int> visited, ways;
    int x, y;

    int f(int i, int j, vector<vector<int>>& obstacleGrid)
    {
        visited[{i, j}] = 1;
        if(ways.find({i,j})!=ways.end())
        {
            return ways[{i, j}];
        }
        else if(i==x && j==y)
        {
            if(obstacleGrid[i][j]==0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            int take1=0, take2=0;
            if(i+1<=x)
            {
                if(visited[{i+1, j}] == 0 && obstacleGrid[i+1][j] == 0)
                {
                    take1 = f(i+1, j, obstacleGrid);
                    visited[{i+1, j}] = 0;
                }
            }
            if(j+1<=y)
            {
                if(visited[{i, j+1}] == 0 && obstacleGrid[i][j+1] == 0)
                {
                    take2 = f(i, j+1, obstacleGrid);
                    visited[{i, j+1}] = 0;
                }
            }
            return ways[{i, j}] = take1 + take2;
        }
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        x = obstacleGrid.size()-1, y = obstacleGrid[0].size()-1;
        int ans = f(0, 0, obstacleGrid);
        if(obstacleGrid[0][0]==1)
        {
            ans = 0;
        }
        return ans;
    }

int main()
{
    vector<vector<int>> obstacleGrid = {{0,1}, {0,0}};
    uniquePathsWithObstacles(obstacleGrid);
    return 0;
}