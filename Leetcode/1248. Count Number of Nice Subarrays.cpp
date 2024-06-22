#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) 
{
    int n = nums.size();
    vector <int> arr(n);
    for(int i = 0; i < n; i++)
    {
        if(nums[i] % 2 != 0) arr[i] = 1;
        else arr[i] = 0;
    }
    unordered_map <long long, int> freq;
    long long sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(sum == k) ans++;
        if(freq.count(sum - k) == true) ans += freq[sum - k];
        freq[sum]++;
    }
    return ans;
}

int main()
{
    

    return 0;
}