#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int i, p1, p2, n=nums.size();
        for(i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            int p1=i+1, p2=n-1;
            while(p1<p2)
            {
                int sum = nums[i]+nums[p1]+nums[p2];
                if(sum>0)
                {
                    p2--;
                }
                else if(sum<0)
                {
                    p1++;
                }
                else if(sum==0)
                {
                    ans.push_back({nums[i], nums[p1], nums[p2]});
                    p1++;
                    p2--;
                    while(p1<p2 && nums[p1]==nums[p1-1])
                    {
                        p1++;
                    }
                    while(p1<p2 && nums[p2]==nums[p2+1])
                    {
                        p2--;
                    }
                }
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    threeSum(nums);

    return 0;
}