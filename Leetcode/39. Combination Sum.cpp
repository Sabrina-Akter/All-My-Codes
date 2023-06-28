#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans, ANS;
set<vector<int> > s;
int p=0;
void func(vector<int>& candidates, int sum, int target, vector<int>&v)
{
    //base case
    if(sum>=target)
    {
        if(sum==target)
        {
            ans.push_back(v);
        }
        return;
    }
    for(int i=0;i<candidates.size();i++)
    {
        v.push_back(candidates[i]);
        func(candidates, sum+candidates[i], target, v);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    int sum=0;
    vector<int> v;
    func(candidates, sum, target, v);
    for(int i=0;i<ans.size();i++)
    {
        sort(ans[i].begin(), ans[i].end());
        s.insert(ans[i]);
        if(s.size()!=p)
        {
            ANS.push_back(ans[i]);
        }
        p = s.size();
    }
    return ANS;    
    }

int main()
{
    vector<int>candidates = {2,3,5};
    int target = 8;
    combinationSum(candidates, target);
    return 0;
}