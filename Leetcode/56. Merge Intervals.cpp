#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        map <int,int> m;
        auto it = m.begin();
        int i, a, b, x, y;
        for(i=0;i<intervals.size();i++)
        {
            a = intervals[i][0];
            b = intervals[i][1];
            if(i==0)
            {
                m[a] = b;
                it++;
                x = it->first, y = it->second;
            }
            else
            {
                if(a>=x && a<=y)
                {
                    if(b>y)
                    {
                        m[x] = b;
                        y = b;
                    }
                }
                else
                {
                    m[a] = b;
                    it++;
                    x = it->first, y = it->second;
                }
            }    
        }
        vector<vector<int>> v;
        for(auto it = m.begin(); it!=m.end();it++)
        {
            vector<int> T;
            x = it->first, y = it->second;
            T.push_back(x);
            T.push_back(y);
            v.push_back(T);
        }
        return v;
    }

int main()
{
    vector<vector<int>> v = {{1,2}};
    merge(v);
    return 0;
}