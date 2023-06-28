#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int left=0, right=nums.size()-1, mid, mid_l, mid_r, ans;
    int t = 10;
    while(t--)
    {
        mid=(left+right)/2;
        if(mid-1<0)
        {
            mid_l = nums[mid];
        }
        else
        {
            mid_l = nums[mid-1];
        }
        if(mid+1==nums.size())
        {
            mid_r = nums[mid];
        }
        else
        {
            mid_r = nums[mid+1];
        }
        if(nums[mid]>=mid_l && nums[mid]>=mid_r)
        {
            ans = mid;
            break;
        }
        else if(mid_l>nums[mid])
        {
            right = mid-1;
        }
        else if(mid_r>nums[mid])
        {
            left = mid+1;
        }
    }
    return ans;
    }

int main()
{
    vector<int> nums = {3, 1};
    findPeakElement(nums);

    return 0;
}