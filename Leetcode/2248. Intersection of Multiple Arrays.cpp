#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<vector<int>>& nums) 
{
    map <int, int> mp;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = 0; j < nums[i].size(); j++) mp[nums[i][j]]++;
    }
    vector <int> ans;
    for(auto &it : mp)
    {
        if(it.second == nums.size()) ans.push_back(it.first);
    }
    return ans;
}

int main()
{
    

    return 0;
}