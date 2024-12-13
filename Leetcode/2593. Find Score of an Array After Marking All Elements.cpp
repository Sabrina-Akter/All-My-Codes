#include <bits/stdc++.h>
using namespace std;

long long findScore(vector<int>& nums) 
{
    vector <pair<int, int>> p;
    for(int i = 0; i < nums.size(); i++) p.push_back({nums[i], i});
    sort(p.begin(), p.end());
    long long sum = 0;
    unordered_map <int, int> mp;
    for(int i = 0; i < p.size(); i++)
    {
        if(mp[p[i].second] == 0) 
        {
            sum += p[i].first;
            mp[(p[i].second)] = 1;
            mp[(p[i].second) - 1] = 1;
            mp[(p[i].second) + 1] = 1;
        }
    }
    return sum;
}

int main()
{
    

    return 0;
}