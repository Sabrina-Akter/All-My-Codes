#include <bits/stdc++.h>
using namespace std;

int maximumBeauty(vector<int>& nums, int k) 
{
    int neg = 0;
    int low, high;
    vector <int> v(200010);
    for(int i = 0; i < nums.size(); i++)
    {
        low = nums[i] - k;
        if(low < 0)
        {
            neg++;
            low = 0;
        }
        high = nums[i] + k;
        v[low]++;
        v[high + 1]--;
    }
    int mx = 0;
    int sum = 0;
    for(int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        mx = max(mx, sum);
    }
    return max(mx, neg);
}

int main()
{
    

    return 0;
}