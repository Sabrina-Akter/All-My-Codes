#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int i, sum=0, ans=-1;
    vector<int> pref(nums.size());
    for(i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        pref[i] = sum;
    }
    for(i=0;i<nums.size();i++)
    {
        int left, right;
        if(i==0)
        {
            left = 0;
        }
        else
        {
            left = pref[i-1];
        }
        right = pref[nums.size()-1]-pref[i];
        if(left==right)
        {
            ans = i;
            break;
        }
    }
    return ans;
    }

int main()
{
    vector<int> nums = {1,7,3,6,5,6};
    pivotIndex(nums);
    return 0;
}