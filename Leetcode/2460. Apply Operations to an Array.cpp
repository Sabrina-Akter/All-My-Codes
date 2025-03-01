#include <bits/stdc++.h>
using namespace std;

vector<int> applyOperations(vector<int>& nums) 
{
    int n = nums.size(), x = 0;
    vector <int> ans(n);
    for(int i = 0; i < n; i++)
    {
        if(i + 1 < n && nums[i] == nums[i + 1])
        {
            nums[i] *= 2;
            nums[i + 1] = 0;
        }
        if(nums[i] != 0)
        {
            ans[x] = nums[i];
            x++;
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}