#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
map<vector<int>, int> m;
map<pair<vector<int>, int>, int> m2;

void f(vector<int> &nums, int index, vector<int> &v, int sum, int target)
{
    if ((m2[{v, index}] == 0 || v.size()==0) && (sum<=target))
    {
        if (index == nums.size() - 1)
        {
            vector<int> test;
            test = v;
            sort(test.begin(), test.end());
            m[test]++;
            if (m[test] == 1 && sum == target)
            {
                ans.push_back(v);
            }
        }
        else
        {
            f(nums, index + 1, v, sum, target);
            m2[{v, index}] = 1;
            v.push_back(nums[index + 1]);
            f(nums, index + 1, v, sum + nums[index + 1], target);
            v.pop_back();
            m2[{v, index}] = 1;
        }
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<int> v;
    f(candidates, -1, v, 0, target);
    return ans;
}

int main()
{
    vector<int> candidates = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int target = 27;
    combinationSum2(candidates, target);

    return 0;
}