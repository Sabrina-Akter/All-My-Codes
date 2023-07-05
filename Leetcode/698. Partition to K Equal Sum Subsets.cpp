#include <bits/stdc++.h>
using namespace std;
    
    map <int, vector<vector<int> > > m;

    void f(vector<int>& nums, int k, int ind, int sum, vector<int>& test)
    {
        if(ind==nums.size()-1)
        {
            m[sum].push_back(test);
        }
        else
        {
            f(nums, k, ind+1, sum, test);
            test.push_back(nums[ind+1]);
            f(nums, k, ind+1, sum+(nums[ind+1]), test);
            test.pop_back();
        }
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        bool ans = false;
        vector <int> test;
        f(nums, k, -1, 0, test);
        return ans;
    }

int main()
{
    vector<int> nums = {4,3,2,5,2,1,5};
    int k=4;
    canPartitionKSubsets(nums, k);
    return 0;
}