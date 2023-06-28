#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void func(vector<int>&v,int i, vector<int>&nums, int k)
{
    //base case
    if(i==nums.size())
    {
        if(v.size()==k)
        {
            ans.push_back(v);
        }
        return;
    }
    //take no element
    func(v, i+1, nums, k);
    //take ith element
    v.push_back(nums[i]);
    func(v, i+1, nums, k);
    v.pop_back();
}

vector<vector<int>> combine(int n, int k) {
    vector <int> nums, v;
    for(int i=1;i<=n;i++)
    {
        nums.push_back(i);
    }
    func(v,0,nums, k);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return ans;
    }

int main()
{
    int n = 4, k = 2;
    combine(n, k);
    return 0;
}