#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        int i, j, p1, p2, n=nums.size();
        long long sum;
        for(i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                p1 = j+1;
                p2 = n-1;
                while(p1<p2)
                {
                    sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[p1];
                    sum+=nums[p2];
                    if(sum==target)
                    {
                        ans.push_back({nums[i], nums[j], nums[p1], nums[p2]});
                        p1++;
                        p2--;
                        while(p1<p2 && nums[p1]==nums[p1-1]) p1++;
                        while(p1<p2 && nums[p2]==nums[p2+1]) p2--;
                    }
                    else if(sum>target)
                    {
                        p2--;
                    }
                    else if(sum<target)
                    {
                        p1++;
                    }
                }
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {-2,-1,-1,1,1,2,2};
    int target = 0;
    fourSum(nums, target);

    return 0;
}