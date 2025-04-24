#include <bits/stdc++.h>
using namespace std;

int countCompleteSubarrays(vector<int>& nums) 
{
    int n = nums.size();
    unordered_map <int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[nums[i]];
    }
    int total = mp.size(), ans = 0;
    for(int i = 0; i < n; i++)
    {
        unordered_map <int, int> temp;
        for(int j = i; j < n; j++)
        {
            temp[nums[j]];
            if(temp.size() == total) ans++;
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}