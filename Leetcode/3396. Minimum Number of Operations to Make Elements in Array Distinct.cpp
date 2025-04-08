#include <bits/stdc++.h>
using namespace std;

int minimumOperations(vector<int>& nums) 
{
    int n = nums.size(), last = -1, div;
    unordered_map <int, int> freq;
    for(int i = 0; i < n; i++) freq[nums[i]]++;

    for(int i = 0; i < n; i++)
    {
        if(freq[nums[i]] > 1)
        {
            last = i;
            freq[nums[i]]--;
        }
    }
    if(last == -1) return 0;
    else
    {
        last++;
        div = last / 3;
        if(last % 3 != 0) div++;
    }
    return div;
}

int main()
{
    

    return 0;
}