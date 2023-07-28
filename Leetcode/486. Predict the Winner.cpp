#include <bits/stdc++.h>
using namespace std;
    bool ans;

    void f(vector<int>& nums, int i, int j, int sum1, int sum2, int turn, int cnt)
    {
        if(cnt==nums.size())
        {
            if(sum1>=sum2)
            {
                ans = true;
            }
        }
        else
        {
            if(turn%2!=0)
            {
                if(i+1<nums.size() && i+1!=j)
                {
                    f(nums, i+1, j, sum1+nums[i+1], sum2, turn+1, cnt+1);
                }
                if(j-1>=0 && j-1!=i)
                {
                    f(nums, i, j-1, sum1+nums[j-1], sum2, turn+1, cnt+1);
                }
            }
            else
            {
                
                if(i+1<nums.size() && i+1!=j)
                {
                    if(nums[i+1]>=nums[j])
                    {
                        f(nums, i+1, j, sum1, sum2+nums[i+1], turn+1, cnt+1);
                    }
                }
                else if(nums[j-1]>nums[i] && j-1>=0 && j-1!=i)
                {
                    f(nums, i, j-1, sum1, sum2+nums[j-1], turn+1, cnt+1);
                }
            }
        }
    }

    bool PredictTheWinner(vector<int>& nums) {
        f(nums, -1, nums.size(), 0, 0, 1, 0);
        return ans;            
    }

int main()
{
    vector<int> nums = {1,5,233, 7};
    PredictTheWinner(nums);

    return 0;
}