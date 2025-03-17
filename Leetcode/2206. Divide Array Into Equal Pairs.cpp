#include <bits/stdc++.h>
using namespace std;

bool divideArray(vector<int>& nums) 
{
    unordered_map <int, int> freq;
    for(int i = 0; i < nums.size(); i++) freq[nums[i]]++;
    
    int ans = 0;
    for(auto &it : freq) ans += it.second / 2;

    return ans == nums.size() / 2;
}

int main()
{
    

    return 0;
}