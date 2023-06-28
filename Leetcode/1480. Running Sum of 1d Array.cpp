#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(i!=0)
            {
                nums[i]+=nums[i-1];
            }
        }
        return nums;
    }

int main()
{
    vector <int> nums = {1,2,3,4};
    runningSum(nums);

    return 0;
}