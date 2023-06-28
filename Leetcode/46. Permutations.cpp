#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        do
        {
            int i;
            vector <int> v;
            for(i=0;i<nums.size();i++)
            {
                v.push_back(nums[i]);
            }
            ans.push_back(v);
        } while (next_permutation(nums.begin(), nums.end()));
        return ans;
    }

int main()
{
    vector <int> nums = {1, 2, 3};
    permute(nums);

    return 0;
}