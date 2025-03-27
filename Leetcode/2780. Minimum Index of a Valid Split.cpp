#include <bits/stdc++.h>
using namespace std;

int minimumIndex(vector<int>& nums) 
{
    double n = nums.size(), half = n / 2;
    int item = -1;
    unordered_map <int, int> mp;
    for(int i = 0; i < n; i++) 
    {
        mp[nums[i]]++;
        if(mp[nums[i]] > half) item = nums[i];
    }

    int cnt = 0;
    double temp = 0, h1, rest, h2, total = mp[item];
    for(int i = 0; i < n; i++)
    {
        temp++;
        rest = n - temp;
        h1 = temp / 2;
        h2 = rest / 2;
        if(nums[i] == item) cnt++;
        if(nums[i] == item && cnt > h1 && (total - cnt) > h2)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    

    return 0;
}