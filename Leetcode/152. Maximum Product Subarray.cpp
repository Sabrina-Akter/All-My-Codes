#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        int i, mx = INT_MIN, pre=1, suf=1;
        for(i=0;i<nums.size();i++)
        {
            
            if(nums[i]==0)
            {
                pre = 1;
                mx = max(mx, 0);
            }
            else
            {
                pre*=nums[i];
                mx = max(mx, pre);
            }
            if(nums[nums.size()-i-1]==0)
            {
                suf = 1;
                mx = max(mx, 0);
            }
            else
            {
                suf*=nums[nums.size()-i-1];
                mx = max(mx, suf);
            }
        }
        return mx;
    }

int main()
{
    vector <int> nums = {-2,-2,-6,0,-16,0,-2,-4,0};
    cout << maxProduct(nums) << endl;;
    return 0;
}