#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector <int> memo;
    int f(vector<int>& nums, int i)
    {
        if(i < 0) return 0;
        if(memo[i] >= 0) return memo[i];
        return memo[i] = max(f(nums, i - 2) + nums[i], f(nums, i - 1));
    }

    int rob(vector<int>& nums) 
    {
        memo.resize(nums.size() + 1, -1);
        return f(nums, nums.size() - 1);
    }
};

int main()
{
    

    return 0;
}
