#include <bits/stdc++.h>
using namespace std;

bool checkPossibility(vector<int>& nums) {
        int i, cnt=0;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i+1])
            {
                if(nums[i+1]>=nums[i-1] || i==0)
                {
                    nums[i] = nums[i+1];
                }
                else
                {
                    nums[i+1] = nums[i];
                }
                break;
            }
        }
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                return false;
            }
        }
        return true;
    }

int main()
{
    vector<int> n = {4,2,3};
    checkPossibility(n);

    return 0;
}