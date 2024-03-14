#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        int ans = 0;
        unordered_map <int, int> pref;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(sum == goal) ans++;
            if(pref.count(sum - goal) == true) ans += pref[sum - goal];
            pref[sum]++;
        }
        return ans;     
    }
};

int main()
{
    

    return 0;
}