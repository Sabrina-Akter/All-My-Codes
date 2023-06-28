#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void func(vector<int>& v, int i, vector<int>& nums)
{
    //base case
    if(i==nums.size())
    {
        ans.push_back(v);
        return;
    }
    //add nothing
    func(v, i+1, nums);
    //add ith value
    v.push_back(nums[i]);
    func(v, i+1, nums);
    v.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v={};
        func(v, 0, nums);
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        return ans;
    }

int main()
{
    vector <int> nums = {1,2,3};
    subsets(nums);

    return 0;
}