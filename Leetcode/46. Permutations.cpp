#include <bits/stdc++.h>
using namespace std;

int done[10];
vector<vector<int>> ans;

void f(vector<int>& nums, int sum, vector<int>& t)
{
    if(sum==nums.size())
    {
        ans.push_back(t);
    }
    else
    {
        for(int i=0;i<nums.size();i++)
        {
            if(done[i]==0)
            {
                t.push_back(nums[i]);
                done[i] = 1;
                f(nums, sum+1, t);
                t.pop_back();
                done[i] = 0;
            }
        }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
        memset(done, 0, sizeof(done));
        vector<int> t;
        f(nums, 0, t);
        return ans;
    }

int main()
{
    vector <int> nums = {1,2,3,1,2,3};
    permute(nums);

    return 0;
}