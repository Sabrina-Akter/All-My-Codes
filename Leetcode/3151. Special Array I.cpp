#include <bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int>& nums) 
{
    int n = nums.size();
    if(n == 1) return true;
    for(int i = 0; i < n - 1; i++)
    {
        if(nums[i] % 2 == 0 && nums[i + 1] % 2 == 0) return false;
        if(nums[i] % 2 == 1 && nums[i + 1] % 2 == 1) return false;
    }
    return true;
}

int main()
{
    

    return 0;
}