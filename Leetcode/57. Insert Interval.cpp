#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        map <int, int> m;
        int i, a, b, mn = INT32_MAX, mx = INT32_MIN;
        for(i=0;i<intervals.size();i++)
        {
            a = intervals[i][0], b = intervals[i][1];
            if(a>=mn && a<=mx)
            {
                mn = min(a, mn);
            }
            else
            {
                mn = a;
            }
            if(b>=mn && b<=mx)
            {
                mx = max(b, mx);
            }
            else
            {
                mx = b;
            }
            m[mn] = mx;
        }
        for(auto it=m.begin(); it!=m.end(); it++)
        {
            vector <int> n;
            n.push_back((*it).first);
            n.push_back((*it).second);
            ans.push_back(n);
        }
        return ans;
    }

int main()
{
    vector<vector<int>> v = {{4,6}};
    vector<int> i = {1,2};
    insert(v, i);
    return 0;
}