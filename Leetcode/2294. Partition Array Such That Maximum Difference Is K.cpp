#include <bits/stdc++.h>
using namespace std;

int partitionArray(vector<int>& nums, int k) 
{
    sort(nums.begin(), nums.end());
    int last = nums[0], ans = 1;
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] - last > k)
        {
            last = nums[i];
            ans++;
        }
    }
    return ans;        
}

int main()
{
    

    return 0;
}