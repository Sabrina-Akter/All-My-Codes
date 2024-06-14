#include <bits/stdc++.h>
using namespace std;

int minIncrementForUnique(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    int ans = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(i > 0 && nums[i] > nums[i - 1])
        {
            continue;
        }
        else if(i > 0)
        {
            ans += (nums[i - 1] + 1) - nums[i];
            nums[i] = nums[i - 1] + 1;
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}