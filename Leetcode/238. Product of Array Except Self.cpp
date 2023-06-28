#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int i, pro = 1, zero = 0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                pro*=nums[i];
            }
            if(nums[i]==0)
            {
                zero++;
            }
        }
        vector <int> ans(nums.size());
        for(i=0;i<nums.size();i++)
        {
            if(zero>1)
            {
                ans[i] = 0;
            }
            else if(zero==1)
            {
                if(nums[i]==0)
                {
                    ans[i] = pro;
                }
                else
                {
                    ans[i] = 0;
                }
            }
            else if(zero==0)
            {
                ans[i] = pro/nums[i];
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {1,2,3,4};
    productExceptSelf(nums);
    return 0;
}