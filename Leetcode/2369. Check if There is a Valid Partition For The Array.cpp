#include <bits/stdc++.h>
using namespace std;

    int memo[100005];

    int f(int ind, vector<int>& nums)
    {
        if(memo[ind]!=-1)
        {
            return memo[ind];
        }
        else if(ind==nums.size())
        {
            return 1;
        }
        else
        {
            int x=0, y=0, z;
            if(ind+1<nums.size())
            {
                if(nums[ind]==nums[ind+1])
                {
                    x=f(ind+2, nums);
                }
            }
            if(ind+2<nums.size())
            {
                int dif1 = nums[ind+1]-nums[ind], dif2 = nums[ind+2]-nums[ind+1];
                if((nums[ind]==nums[ind+1] && nums[ind+1]==nums[ind+2]) || (dif1==1 && dif2==1))
                {
                    y=f(ind+3, nums);
                }
            }
            z = x+y;
            if(z>0)
            {
                z = 1;
            }
            return memo[ind] = z;
        }
    }

    bool validPartition(vector<int>& nums) {
        memset(memo, -1, sizeof(memo));
        return f(0, nums);
    }

int main()
{
    vector<int> nums = {1,1,1,2,2};
    validPartition(nums);
    return 0;
}