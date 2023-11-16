#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int size;
    unordered_map <string, int> mp;
    string ans;
    void func(string s)
    {
        if(s.size() == size) 
        {
            if(mp.count(s) == false) ans = s;
            return;
        }
        else
        {
            func(s + '0');
            func(s + '1');
        }
        return;
    }

    string findDifferentBinaryString(vector<string>& nums) 
    {
        for(auto &it:nums) mp[it] = 1;
        size = nums[0].size();
        func("");
        return ans;
    }
};

int main()
{
    return 0;
}