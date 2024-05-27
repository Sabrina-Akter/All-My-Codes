#include <bits/stdc++.h>
using namespace std;

int specialArray(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    int ans = -1;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] >= i + 1)
        {
            ans = i + 1;
        }
        else
        {
            if(ans <= nums[i])
            {
                return -1;
            }
            else
            {
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}