#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) 
{
    if(nums.size() == 1) return true;
    int n = nums.size();
    for(int i = 0; i < n; i++)
    {
        nums.push_back(nums[i]);
    }
    int cnt = 1;
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i - 1] <= nums[i]) cnt++;
        else cnt = 1;
        if(cnt == n) return true;
    }
    return false;
}

int main()
{
    

    return 0;
}