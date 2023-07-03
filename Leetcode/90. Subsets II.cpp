#include <bits/stdc++.h>
using namespace std;
    vector<vector<int>> ans;
    map <vector<int>, int> m;

    void f(vector<int>& nums, int index, vector<int>& v)
    {
        if(index==nums.size()-1)
        {
            vector <int> test;
            test = v;
            sort(test.begin(), test.end());
            m[test]++;
            if(m[test]==1)
            {
                ans.push_back(v);
            }
        }
        else
        {
            f(nums, index+1, v);
            v.push_back(nums[index+1]);
            f(nums, index+1, v);
            v.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector <int> v;
        f(nums, -1, v);
        return ans; 
    }

int main()
{
    vector<int> nums = {4, 1, 0};
    subsetsWithDup(nums);
    return 0;
}