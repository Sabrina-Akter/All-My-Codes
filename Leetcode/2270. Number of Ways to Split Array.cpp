#include <bits/stdc++.h>
using namespace std;

int waysToSplitArray(vector<int>& nums) 
{
    long long total = 0, sum = 0;
    for(int i = 0; i < nums.size(); i++) total += nums[i];
    int ans = 0;
    for(int i = 0; i < nums.size() - 1; i++)
    {
        sum += nums[i];
        if(sum >= total - sum) ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}