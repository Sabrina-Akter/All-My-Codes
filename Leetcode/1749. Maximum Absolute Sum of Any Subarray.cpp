#include <bits/stdc++.h>
using namespace std;

int maxAbsoluteSum(vector<int>& nums) 
{
    int sum = 0, minSum = 0, maxSum = 0;
    for (int num : nums) 
    {
        sum += num;
        if (sum > maxSum) maxSum = sum;
        if (sum < minSum) minSum = sum;
    }
    return abs(maxSum - minSum);
}

int main()
{
    

    return 0;
}