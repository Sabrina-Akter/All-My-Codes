#include <bits/stdc++.h>
using namespace std;

long long maximumTripletValue(vector<int>& nums) 
{
    int n = nums.size();
    long long ans = 0, num, a, b, c;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                a = nums[i], b = nums[j], c = nums[k];
                num = (a - b) * c;
                ans = max(ans, num);
            }
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}