#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int>& nums) 
{
    double sum, num, half;
    int ans = 0;
    for(int i = 0; i < nums.size() - 2; i++)
    {
        sum = nums[i] + nums[i + 2];
        num = nums[i + 1];
        half = num / 2;
        if(sum == half) ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}