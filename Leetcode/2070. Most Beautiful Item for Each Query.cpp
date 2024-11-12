#include <bits/stdc++.h>
using namespace std;

vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) 
{
    map <int, int> mp;
    for(int i = 0; i < items.size(); i++)
    {
        if(mp.count(items[i][0]))
        {
            if(items[i][1] > mp[items[i][0]]) mp[items[i][0]] = items[i][1];
        }
        else mp[items[i][0]] = items[i][1];
    }
    int mx = 0;
    for(auto &it : mp)
    {
        mx = max(mx, it.second);
        mp[it.first] = mx;
    }
    vector <int> ans;
    for(int i = 0; i < queries.size(); i++)
    {
        auto it = mp.lower_bound(queries[i]);
        if(it == mp.end())
        {
            it--;
            ans.push_back(it->second);
        }
        else if(it->first > queries[i])
        {
            if(it == mp.begin()) ans.push_back(0);
            else
            {
                it--;
                ans.push_back(it->second);
            }
        }
        else    ans.push_back(it->second);
    }
    return ans;
}

int main()
{
    

    return 0;
}