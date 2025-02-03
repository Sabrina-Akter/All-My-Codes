#include <bits/stdc++.h>
using namespace std;

int longestMonotonicSubarray(vector<int>& nums) 
{
    int inc = 1, dec = 1, cnt1 = 1, cnt2 = 1;
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i - 1] < nums[i]) cnt1++;
        else cnt1 = 1;
        if(nums[i - 1] > nums[i]) cnt2++;
        else cnt2 = 1;
        inc = max(inc, cnt1);
        dec = max(dec, cnt2);
    }
    return max(inc, dec);
}

int main()
{
    

    return 0;
}