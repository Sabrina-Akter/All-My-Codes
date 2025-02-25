#include <bits/stdc++.h>
using namespace std;

int numOfSubarrays(vector<int>& arr) 
{
    const int MOD = 1e9 + 7;
    int odd = 0, even = 1;
    int sum = 0;
    for (int num : arr) 
    {
        sum += num;
        if (sum % 2 == 1) odd = (odd + 1) % MOD;
        else even = (even + 1) % MOD;
    }
    return (1LL * odd * even) % MOD;
}

int main()
{
    

    return 0;
}