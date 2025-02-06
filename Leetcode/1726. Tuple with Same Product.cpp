#include <bits/stdc++.h>
using namespace std;

int perm(int n, int r) 
{
    int result = 1;
    for (int i = 0; i < r; i++) result *= (n - i); 
    return result;
}
int tupleSameProduct(vector<int>& nums) 
{
    unordered_map <int, int> mp;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++) mp[nums[i] * nums[j]]++;
    }
    int ans = 0;
    for(auto &it : mp) if(it.second > 1) ans += (4 * perm(it.second, 2));
    return ans;
}

int main()
{
    

    return 0;
}