#include <bits/stdc++.h>
using namespace std;

int maxAdjacentDistance(vector<int>& nums) 
{
    int ans = 0;
    for(int i = 1; i < nums.size(); i++)
    {
        ans = max(ans, abs(nums[i] - nums[i - 1]));
        if(i == nums.size() - 1)
        {
            ans = max(ans, abs(nums[i] - nums[0]));
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}
