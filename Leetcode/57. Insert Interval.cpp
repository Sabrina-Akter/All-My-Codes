#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for(int i = 0; i < intervals.size(); i++)
        {
            if(ans.empty() || ans.back()[1] < intervals[i][0])
            {
                vector <int> temp = {intervals[i][0], intervals[i][1]};
                ans.push_back(temp);
            }
            else
            {
                ans.back()[0] = min(ans.back()[0], intervals[i][0]);
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;

    }
};

int main()
{
    return 0;
}