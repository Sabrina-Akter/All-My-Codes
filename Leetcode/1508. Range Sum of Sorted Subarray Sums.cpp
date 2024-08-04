#include <bits/stdc++.h>
using namespace std;

int rangeSum(vector<int>& nums, int n, int left, int right) 
{
    long long sum;
    vector <long long> sums;
    for(int i = 0; i < n; i++)
    {
        sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += nums[j];
            sums.push_back(sum);
        }
    }
    sort(sums.begin(), sums.end());
    long long ans = 0;
    long long MOD = 1e9 + 7;
    for(int i = left - 1; i < right; i++) ans = (ans + sums[i]) % MOD;
    return ans;
}

int main()
{
    

    return 0;
}