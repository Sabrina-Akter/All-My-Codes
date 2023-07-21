#include <bits/stdc++.h>
using namespace std;

    vector <int> v(2005, -1);
    map <int, int> m;
    int ans = 0;
    void f(vector<int>& nums, int index)
    {
        int mx = 0;
        for(int i=index+1; i<nums.size(); i++)
        {
            if(nums[index]<nums[i])
            {
                if(v[nums[i]]==-1)
                {
                    f(nums, index-1);
                }
                else
                {
                    mx = max(mx, v[i]);
                }
            }
        }
        v[index] = mx+1;
        m[mx+1]++;
        ans = max(ans, mx+1);
    }

    int findNumberOfLIS(vector<int>& nums) {
        f(nums, nums.size()-1, 0);
        return 0;
    }

int main()
{
    vector<int> nums = {1, 3, 4, 7};
    findNumberOfLIS(nums);

    return 0;
}