#include <bits/stdc++.h>
using namespace std;

int leastBricks(vector<vector<int>>& wall) {
        int i, j, sum, mx = 0, s, ans=0, total;
        unordered_map<int, int> m;
        for(i=0;i<wall.size();i++)
        {
            sum=0, total=-1;
            for(j=0;j<wall[i].size();j++)
            {
                sum+=wall[i][j];
                if(j==wall[i].size()-1)
                {
                    total = sum;
                }
                m[sum]++;
                if(m[sum]>mx && sum!=total)
                {
                    mx = m[sum];
                    s = sum;
                }
            }
        }
        if(mx==-1)
        {
            ans = wall.size();
        }
        else
        {
            ans = wall.size() - mx;
        }
        cout << ans << endl;
        return ans;
    }

int main()
{
    //vector<vector<int>> v = {{1,2,2,1},{3,1,2},{1,3,2},{2,4},{3,1,2},{1,3,1,1}};
    vector<vector<int>> v = {{1}, {1}, {1}};
    leastBricks(v);
    return 0;
}