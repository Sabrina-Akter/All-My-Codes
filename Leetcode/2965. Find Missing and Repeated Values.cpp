#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
{
    int n = grid.size(), sum = 0;
    int N = n * n, need = (N * (N + 1)) / 2;
    vector <int> nums(N + 1);
    vector <int> ans;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < grid[i].size(); j++)
        {
            nums[grid[i][j]]++;
            if(nums[grid[i][j]] == 2) ans.push_back(grid[i][j]);
            else sum += grid[i][j];
        }
    }
    ans.push_back(need - sum);
    return ans;
}

int main()
{
    

    return 0;
}