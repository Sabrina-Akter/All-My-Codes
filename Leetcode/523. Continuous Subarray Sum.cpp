#include <bits/stdc++.h>
using namespace std;

bool checkSubarraySum(vector<int>& nums, int k) 
{
    unordered_map <long long, int> rem;
    rem[0] = -1;
    long long sum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if(i > 0 && sum % k == 0) return true;
        if((i > 0 && nums[i] == 0 && nums[i - 1] == 0) || (nums.size() >= 2 && k == 1)) return true;
        if((rem.count(sum % k) == true) && i > 0 && (i - rem[sum % k] >= 2 || nums[i - 1] == 0)) return true;
        rem[sum % k] = i;
    }
    return false;
}

int main()
{
    

    return 0;
}