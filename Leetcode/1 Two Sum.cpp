#include <bits/stdc++.h>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        unordered_map <int, int> exist;
        for(int i=0; i<nums.size(); i++)
        {
            int remainder = target - nums[i];
            if(exist.find(remainder)!=exist.end())
            {
                ans = {exist[remainder], i};
                break;
            }
            else
            {
                exist[nums[i]] = i;
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {2,7,11,15};
    int target = 9;
    twoSum(nums, target);

    return 0;
}
