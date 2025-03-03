#include <bits/stdc++.h>
using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) 
{
    vector<int> L, M, R, ans;
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] < pivot) L.push_back(nums[i]);
        else if(nums[i] == pivot) M.push_back(nums[i]);
        else R.push_back(nums[i]);
    }
    
    ans.insert(ans.end(), L.begin(), L.end());
    ans.insert(ans.end(), M.begin(), M.end());
    ans.insert(ans.end(), R.begin(), R.end());
    
    return ans;
}

int main()
{
    

    return 0;
}