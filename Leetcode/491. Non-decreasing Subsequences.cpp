#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
set<vector<int> > s;
int p=0;

void func(vector<int>& v, int i, vector<int>& nums)
{
    //base case
    if(i==nums.size())
    {
        if(v.size()>=2)
        {
            s.insert(v);
            if(p!=s.size())
            {
                ans.push_back(v);
            }
            p= s.size();
        }
        return;
    }
    //add nothing
    func(v, i+1, nums);
    //add ith value
    if(v.size()==0)
    {
        v.push_back(nums[i]);
        func(v, i+1, nums);
        v.pop_back();
    }
    else if(v[v.size()-1]<=nums[i])
    {
        v.push_back(nums[i]);
        func(v, i+1, nums);
        v.pop_back();
    }
}

vector<vector<int>> findSubsequences(vector<int>& nums) 
{
    vector<int> v={};
    func(v, 0, nums);
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
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,1,1,1,1,1};
    findSubsequences(nums);

    return 0;
}