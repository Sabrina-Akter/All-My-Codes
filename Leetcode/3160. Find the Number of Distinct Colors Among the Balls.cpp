#include <bits/stdc++.h>
using namespace std;

vector<int> queryResults(int limit, vector<vector<int>>& queries) 
{
    int n = queries.size(), x, y;
    unordered_map <int, int> mp1, mp2;
    vector <int> ans(n);
    for(int i = 0; i < n; i++)
    {
        x = queries[i][0];
        y = queries[i][1];
        mp2[y]++;
        if(mp1.count(x))
        {
            mp2[mp1[x]]--;
            if(mp2[mp1[x]] == 0) mp2.erase(mp1[x]);
        }       
        mp1[x] = y;
        ans[i] = mp2.size();
    }
    return ans;
}

int main()
{
    

    return 0;
}