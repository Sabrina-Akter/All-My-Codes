#include <bits/stdc++.h>
using namespace std;

int maxAscendingSum(vector<int>& nums) 
{
    int mx = nums[0], sum = nums[0];
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i - 1] < nums[i]) sum += nums[i];
        else sum = nums[i];
        mx = max(mx, sum);
    }
    return mx;
}

int main()
{
    

    return 0;
}