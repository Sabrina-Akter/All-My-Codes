#include <bits/stdc++.h>
using namespace std;

int findMaxK(vector<int>& nums) 
{
    int mx = -1;
    unordered_map <int, int> exist;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] > 0 && exist.count(-(nums[i])))
        {
            mx = max(mx, nums[i]);
        }
        else if(nums[i] < 0 && exist.count(-1 * (nums[i])))
        {
            mx = max(mx, -1 * (nums[i]));
        }
        exist[nums[i]] = 1;
    }
    return mx;
}

int main()
{
    

    return 0;
}