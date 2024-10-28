#include <bits/stdc++.h>
using namespace std;

int longestSquareStreak(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    unordered_map <int, int> mp;
    int mx = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        int x = sqrt(nums[i]);
        if(x * x == nums[i])
        {
            if(mp.count(nums[i])) continue;
            else if(mp.count(x))
            {
                mp[nums[i]] = mp[x] + 1;
            }
            else mp[nums[i]] = 1;
        }
        else mp[nums[i]] = 1;
        mx = max(mx, mp[nums[i]]);
    }
    if(mx == 1) mx = -1;
    return mx;
}

int main()
{
    

    return 0;
}