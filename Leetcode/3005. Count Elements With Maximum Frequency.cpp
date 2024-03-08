#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map <int, int> freq;
        int mx = 0;
        for(auto &it : nums)
        {
            freq[it]++;
            mx = max(mx, freq[it]);
        }
        int ans = 0;
        for(auto &it : freq)
        {
            if(it.second == mx) ans += mx;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}