#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector<int>& nums) 
{
    vector <int> v;
    int two = 2;
    int one;
    while(two--)
    {
        one = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            v.push_back(nums[i]);
            if(nums[i] == 1) one++;
        }
    }
    int mx = 0;
    int cnt = 0;
    for(long long i = 0; i < v.size(); i++)
    {
        if(v[i] == 1) cnt++;
        if(i >= one)
        {
            if(v[i - one] == 1) cnt--;
        }
        mx = max(mx, cnt);
    }
    return one - mx;
}

int main()
{
    

    return 0;
}