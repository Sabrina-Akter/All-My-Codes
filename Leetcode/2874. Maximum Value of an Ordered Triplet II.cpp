#include <bits/stdc++.h>
using namespace std;

long long maximumTripletValue(vector<int>& nums) 
{
    int n = nums.size(), mx;
    vector <int> pref(n), suf(n);
    mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        mx = max(mx, nums[i]);
        pref[i] = mx;
    }
    mx = INT_MIN;
    for(int i = n - 1; i >= 0; i--)
    {
        mx = max(mx, nums[i]);
        suf[i] = mx;
    } 
    long long a, b, c, num, ans = 0;
    for(int i = 1; i < n - 1; i++)  
    {
        a = pref[i - 1], b = nums[i], c = suf[i + 1];
        num = (a - b) * c;
        ans = max(num, ans);
    }    
    return ans; 
}

int main()
{
    

    return 0;
}