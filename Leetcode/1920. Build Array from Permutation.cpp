#include <bits/stdc++.h>
using namespace std;

vector<int> buildArray(vector<int>& nums) 
{
    int n = nums.size();
    vector <int> ans(n);
    for(int i = 0; i < n; i++)
    {
        ans[i] = nums[nums[i]];
    }
    return ans;
}

int main()
{
    

    return 0;
}