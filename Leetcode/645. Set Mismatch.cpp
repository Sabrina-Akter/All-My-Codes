#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        set <int> all;
        for(int i = 1; i <= nums.size(); i++)
        {
            all.insert(i);
        }
        unordered_map <int, int> freq;
        int repeat;
        for(auto &it : nums)
        {
            freq[it]++;
            if(freq[it] == 2) repeat = it;
            all.erase(it);
        }
        vector <int> ans = {repeat, *all.begin()};
        return ans;
    }
};

int main()
{
    

    return 0;
}