#include <bits/stdc++.h>
using namespace std;

int numEquivDominoPairs(vector<vector<int>>& dominoes) 
{
    int n = dominoes.size(), mn, mx;
    map <pair<int, int>, int> mp;
    for(auto &it : dominoes)
    {
        mn = min(it[0], it[1]);
        mx = max(it[0], it[1]);
        mp[{mn, mx}]++;
    }
    int ans = 0, N, M;
    for(auto &it : mp)
    {
        N = it.second;
        M = N - 1;
        if(N > 1)
        {
            ans += ((N * M) / 2);
        }
    }
    return ans;
}

int main()
{

    return 0;
}