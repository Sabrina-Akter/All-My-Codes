#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) 
{
    int n = nums.size(), ans = 0;
    string s;
    for(int i = 0; i < n; i++)
    {
        s = to_string(nums[i]);
        if(s.size() % 2 == 0) ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}