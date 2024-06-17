#include <bits/stdc++.h>
using namespace std;

bool judgeSquareSum(int c) 
{
    vector <long long> nums;
    unordered_map <long long, int> mp;
    nums.push_back(0);
    mp[0] = 1;
    for(long long i = 1; i * i <= c; i++)
    {
        mp[i * i] = 1;
        nums.push_back(i * i);
    }
    for(int i = 0; i < nums.size(); i++)
    {
        if(mp.count(c - nums[i]) == true) return true;
    }
    return false;
}

int main()
{
    

    return 0;
}