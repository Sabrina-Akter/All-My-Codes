#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int minOperations(vector<int>& nums) 
    {
        unordered_map <int, int> freq;
        for(int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        int ans = 0;
        for(auto &it : freq)
        {
            if(it.second == 1) return -1;
            ans += it.second / 3;
            if(it.second % 3 != 0) ans++;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}