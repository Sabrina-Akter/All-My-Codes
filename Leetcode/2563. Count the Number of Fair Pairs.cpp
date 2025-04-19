#include <bits/stdc++.h>
using namespace std;

long long countFairPairs(vector<int>& nums, int lower, int upper) 
{
    sort(nums.begin(), nums.end());
    long long count = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        int left = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
        int right = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin();
        count += (right - left);
    }
    return count;   
}

int main()
{
    vector<int> nums = {0,1,4,4,5,7};
    int l=3, h=6;
    countFairPairs(nums, l, h);
    return 0;
}