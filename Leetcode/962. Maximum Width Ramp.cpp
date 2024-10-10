#include <bits/stdc++.h>
using namespace std;

int maxWidthRamp(vector<int>& nums) 
{
    unordered_map <int, int> pos;
    vector <int> v;
    int mx = -1, n = nums.size();
    for(int i = n - 1; i >= 0; i--)
    {
        if(nums[i] > mx)
        {
            mx = nums[i];
            pos[mx] = i;
            v.push_back(mx);
        }
    }
    mx = 0;
    for(int i = 0; i < n; i++)
    {
        auto it = lower_bound(v.begin(), v.end(), nums[i]);
        int dist = abs(i - pos[(*it)]);
        mx = max(mx, dist);
    }
    return mx;
}

int main()
{
    

    return 0;
}