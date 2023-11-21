#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int countNicePairs(vector<int>& nums) 
    {
        int n = nums.size();
        vector <int> rev_nums(n);
        unordered_map <int, int> count;
        for(int i = 0; i < n; i++)
        {
            string temp = to_string(nums[i]);
            reverse(temp.begin(), temp.end());
            rev_nums[i] = stoi(temp);
            int result = nums[i] - rev_nums[i];
            count[result]++;
        }
        long long ans = 0;
        long long MOD = 1e9 + 7;
        for(auto &it : count)
        {
            long long num = it.second;
            long long sum = (num * (num - 1)) / 2;
            ans = (ans + sum) % MOD;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}