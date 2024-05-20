#include <bits/stdc++.h>
using namespace std;

bool f(int i, vector<int>& nums, int temp, int &ans)
{
    if(i == nums.size())
    {
        ans += temp;
        return true;
    }
    f(i + 1, nums, temp ^ nums[i], ans);
    f(i + 1, nums, temp, ans);
    return true;
}
int subsetXORSum(vector<int>& nums) 
{
    int ans = 0;
    f(0, nums, 0, ans);
    return ans;
}

int main()
{
    

    return 0;
}