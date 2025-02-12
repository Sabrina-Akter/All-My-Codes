#include <bits/stdc++.h>
using namespace std;

int Sum(int num)
{
    int sum = 0;
    while(num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int maximumSum(vector<int>& nums) 
{
    unordered_map <int, int> mp;
    int sum, mx = -1;
    for(int i = 0; i < nums.size(); i++)
    {
        sum = Sum(nums[i]);
        if(mp[sum] == 0) mp[sum] = nums[i];
        else
        {
            mx = max(mx, mp[sum] + nums[i]);
            if(nums[i] > mp[sum]) mp[sum] = nums[i];
        }
    }
    return mx;
}

int main()
{
    

    return 0;
}