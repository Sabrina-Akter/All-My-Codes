#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int k) 
{
    int n = nums.size();
    map <int, int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[nums[i]];
    }
    int x = mp.begin()->first, ans = -1;
    if(x > k) ans = mp.size();
    else if(x == k) ans = mp.size() - 1; 
    return ans;
}

int main()
{
    

    return 0;
}