#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        if(it1==nums.end())
        {
            ans = {-1, -1};
        }
        else
        {
            auto it2 = upper_bound(nums.begin(), nums.end(), target);
            if((it1-nums.begin())==(it2-nums.begin()))
            {
                ans = {-1, -1};
            }
            else
            {
                ans.push_back((it1-nums.begin()));
                ans.push_back((it2-nums.begin())-1);
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {5,7,7,8,8,10};
    int target = 11;
    searchRange(nums, target);
    return 0;
}