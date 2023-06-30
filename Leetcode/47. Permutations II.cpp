#include <bits/stdc++.h>
using namespace std;

int done[10];
vector<vector<int>> ans;
map <vector<int>, int> m;
void f(vector<int>& nums, int sum, vector<int>& t)
{
    if(sum==nums.size())
    {
        m[t]++;
        if(m[t]==1)
        {
            ans.push_back(t);
        }
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

vector<vector<int>> permuteUnique(vector<int>& nums) {
        memset(done, 0, sizeof(done));
        vector<int> t;
        f(nums, 0, t);
        return ans;
    }

int main()
{
    vector <int> nums = {1,1};
    permuteUnique(nums);

    return 0;
}