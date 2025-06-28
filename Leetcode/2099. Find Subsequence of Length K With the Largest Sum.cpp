#include <bits/stdc++.h>
using namespace std;

vector<int> maxSubsequence(vector<int>& nums, int k) 
{
    int n = nums.size();
    vector <pair<int, int>> v;
    for(int i = 0; i < n; i++)
    {
        v.push_back({nums[i], i});
    }
    sort(v.rbegin(), v.rend());
    vector <int> order(k);
    for(int i = 0; i < k; i++)
    {
        order[i] = v[i].second;
    }
    sort(order.begin(), order.end());
    vector <int> ans(k);
    for(int i = 0; i < k; i++)
    {
        ans[i] = nums[order[i]];
    }
    return ans;
}

int main()
{
    

    return 0;
}