#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) 
{
    map<int, int>m;
    int i;
    vector<int>ans;
    for(i=0;i<nums.size();i++) 
    {
        m[nums[i]]++;
        if(m[nums[i]]==2)
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;  
}

int main()
{
    vector<int> nums = {4,3,2,7,8,2,3,1};
    findDuplicates(nums);
    return 0;
}