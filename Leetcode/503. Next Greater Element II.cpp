#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
        int i;
        vector<int> ans;
        for(i=0;i<nums.size();i++)
        {
            auto it = upper_bound(nums.begin()+i+1, nums.end(), nums[i]);
            if(it==nums.end())
            {
                it = upper_bound(nums.begin(), nums.begin()+i-1, nums[i]);
                if(it==nums.begin()+i-1)
                {
                    ans.push_back(-1);
                }
            }
            else
            {
                ans.push_back(*it);
            }
            cout << ans[i] << " ";
        }
        return ans;
    }

int main()
{
    vector<int>nums = {5,4,3,2,1};
    nextGreaterElements(nums);
    return 0;
}