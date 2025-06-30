#include <bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums) 
{
    map <int, int> mp;
    for(int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    int last1 = INT_MIN, last2, mx = 0;
    for(auto &it : mp)
    {
        if(last1 == INT_MIN)
        {
            last1 = it.first;
            last2 = it.second;
        }
        else 
        {
            if(it.first - last1 == 1) mx = max(mx, it.second + last2);
            last1 = it.first;
            last2 = it.second;
        }
    }
    return mx;
}

int main()
{
    

    return 0;
}