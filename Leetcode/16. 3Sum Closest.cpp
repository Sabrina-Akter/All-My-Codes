#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int ans, left, right, i, sum, f=0, L=5000, S=-5000, x1=0, x2=0;
    for(i=0;i<nums.size();i++)
    {
        left = i+1, right = nums.size()-1;
        while(left<right)
        {
            sum = nums[i] + nums[left] + nums[right];
            if(sum>target && sum<L)
            {
                L = sum;
                x1=1;
            }
            if(sum<target && sum>S)
            {
                S = sum;
                x2=1;
            }
            if(sum==target)
            {
                f=1;
                break;
            }
            else if(sum>target)
            {
                right--;
            }
            else if(sum<target)
            {
                left++;
            }
        }
        if(f==1)
        {
            ans = sum;
            break;
        }
    }
    if(f==0) 
    {
        int dif1 = abs(L-target), dif2 = abs(S-target);
        if(dif1<=dif2 && x1==1)
        {
            ans = L;
        }
        else
        {
            ans = S;
        }
    } 
    return ans;
    }

int main()
{
    vector<int> nums = {0,0,0};
    int target = 0;
    threeSumClosest(nums, target);
    return 0;
}