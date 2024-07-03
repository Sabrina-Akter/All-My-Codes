#include <bits/stdc++.h>
using namespace std;

int minDifference(vector<int>& nums) 
{
    if(nums.size() <= 4) return 0;
    sort(nums.begin(), nums.end());
    int n = nums.size(), left = 0, right = n - 4;
    int mn = INT_MAX;
    for(int i = 0; i < 4; i++)
    {
        mn = min(mn, (nums[right] - nums[i]));
        right++;
    }
    return mn;
}

int main()
{
    

    return 0;
}