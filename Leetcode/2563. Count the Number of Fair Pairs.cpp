#include <bits/stdc++.h>
using namespace std;

long long countFairPairs(vector<int>& nums, int lower, int upper) 
{
    sort(nums.begin(), nums.end());
    long long ans = 0;
    int x1, x2;
    for(int i = 0; i < nums.size(); i++)
    {
        x1 = lower - nums[i];
        x2 = upper - nums[i];
        auto it1 = lower_bound(nums.begin() + i + 1, nums.end(), x1);
        auto it2 = upper_bound(nums.begin() + i + 1, nums.end(), x2);
        it2--;
        x1 = it1 - nums.begin();
        x2 = it2 - nums.begin();
        if(x1 <= x2) ans += (x2 - x1) + 1;
    }
    return ans;
}

int main()
{
    vector<int> nums = {0,1,4,4,5,7};
    int l=3, h=6;
    countFairPairs(nums, l, h);
    return 0;
}