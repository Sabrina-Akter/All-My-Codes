#include <bits/stdc++.h>
using namespace std;

long long maximumSubarraySum(vector<int>& nums, int k) 
{
    unordered_map <int, int> mp;
    int last_repeat = -1;
    vector <long long> sums;
    long long sum = 0, mx = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        sums.push_back(sum);
        if(mp.count(nums[i])) last_repeat = max(last_repeat, mp[nums[i]]);
        if(i - last_repeat >= k && i >= k - 1)
        {
            if(i == k - 1)
            {
                mx = max(mx, sum);                    
            }
            else if(i >= k)
            {
                mx = max(mx, sum - sums[i - k]);
            }
        }
        mp[nums[i]] = i;
    }
    return mx;
}

int main()
{
    

    return 0;
}