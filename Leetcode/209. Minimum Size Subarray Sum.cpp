#include <bits/stdc++.h>
using namespace std;

    int minSubArrayLen(int target, vector<int>& nums) {
         int L=0, R=0, sum=nums[0], mn=INT_MAX;
         if(sum>=target)
         {
            mn = 1;
         }
         while(L<=R)
         {
            if(sum<target || L==R)
            {
                if(sum>=target)
                {
                   mn = min(mn, R-L+1); 
                }
                if((R+1)<nums.size())
                {
                    R++;
                    sum+=nums[R];
                }
                else
                {
                    break;
                }
            }
            else
            {
                mn = min(mn, R-L+1);
                sum-=nums[L];
                L++;
            }
         }
         if(mn==INT_MAX)
         {
            return 0;
         }
         else
         {
            return mn;
         }      
    }

int main()
{
    vector<int> nums = {10,5,5,5,5};
    int target = 10;
    minSubArrayLen(target, nums);
    return 0;
}