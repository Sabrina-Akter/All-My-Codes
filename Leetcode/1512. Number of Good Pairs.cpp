#include <bits/stdc++.h>
using namespace std;

    int numIdenticalPairs(vector<int>& nums) {
        int i, j, cnt=0, n=nums.size();
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    cnt++;
                }
            }
        }
        return cnt;
    }

int main()
{
    vector<int> nums = {1,2,3,1,1,3};
    numIdenticalPairs(nums);
    return 0;
}