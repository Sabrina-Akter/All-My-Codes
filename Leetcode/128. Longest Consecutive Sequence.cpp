#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    map <int, int> m;
    int i, last, ans=1, mx = 1;
    for(i=0;i<nums.size();i++)
    {
        if(m[nums[i]]!=0)
        {
            continue;
        }
        m[nums[i]]++;
        if(i==0)
        {
            last = nums[0];
        }
        else
        {
            if(last+1==nums[i])
            {
                ans++;
            }
            else
            {
                mx = max(ans, mx);
                ans = 1;
            }
            last = nums[i];
        }
    }
    mx = max(ans, mx);
    if(nums.size()==0)
    {
        mx = 0;
    }
    return mx;    
    }

int main()
{
    vector <int> v = {};
    longestConsecutive(v);

    return 0;
}