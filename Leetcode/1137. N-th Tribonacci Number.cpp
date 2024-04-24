#include <bits/stdc++.h>
using namespace std;

int tribonacci(int n) 
{
    vector <int> nums = {0, 1, 1};
    if(n == 0 || n == 1 || n == 2) return nums[n];
    for(int i = 3; i <= n; i++)
    {
        int x = nums[i - 1] + nums[i - 2] + nums[i - 3];
        nums.push_back(x);
    }
    return nums[n];
}

int main()
{
    

    return 0;
}