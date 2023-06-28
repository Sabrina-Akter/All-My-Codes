#include <bits/stdc++.h>
using namespace std;

vector <int> n;
int T, sum=0, size, cnt=0;

void dp(int sum, int s)
{
    if(s==size)
    {
        if(sum==T)
        {
            cnt++;
        }
        return;
    }
    else
    {
        dp(sum+n[s], s+1);
        dp(sum-n[s], s+1);
    }
}

int findTargetSumWays(vector<int>& nums, int target) {
      T = target, size=nums.size();
      int i;
      for(i=0;i<nums.size();i++)  
      {
        n.push_back(nums[i]);
      }
      dp(sum, 0);
      return cnt;
    }

int main()
{
    vector <int> nums = {1};
    int target = 1;
    findTargetSumWays(nums, target);
    return 0;
}