#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;

        int i, n=intervals.size();

        for(i=0;i<n;i++)
        {
            if(i==0 || ans.back()[1]<intervals[i][0])
            {
                ans.push_back({intervals[i][0], intervals[i][1]});
            }
            else
            {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }

int main()
{
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    merge(intervals);
    return 0;
}