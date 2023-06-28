#include <bits/stdc++.h>
using namespace std;

vector <int> n;
int T, sum=0, size, cnt=0;
map <pair<int, int>, int> memo;

int dp(int sum, int s)
{
    if(s==size)
    {
        if(sum==T)
        {
            return 1;
        }
        return 0;
    }
    else
    {
        if(memo.find({sum, s})!=memo.end())
        {
            return memo[{sum, s}];
        }
        else
        {
            return memo[{sum, s}] = dp(sum+n[s], s+1) + dp(sum-n[s], s+1);
        }
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
      cout << memo[{0, 0}] << endl;
      return memo[{0, 0}];
    }

int main()
{
    vector <int> nums = {1};
    int target = 1;
    findTargetSumWays(nums, target);
    return 0;
}