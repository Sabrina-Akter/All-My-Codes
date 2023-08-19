#include <bits/stdc++.h>
using namespace std;

    bool increasingTriplet(vector<int>& nums) {
        bool ans=0;
        int i, n = nums.size(), mx=-1, mn=INT_MAX;
        vector <int> smallest(n), largest(n);
        for(i=0;i<n;i++)
        {
            mn = min(mn, nums[i]);
            smallest[i] = mn;
        }
        for(i=n-1;i>=0;i--)
        {
            mx = max(mx, nums[i]);
            largest[i] = mx;
        }
        for(i=1;i<n-1;i++)
        {
            int a = smallest[i-1], b = nums[i], c = largest[i+1];
            if(a<b && b<c)
            {
                ans = 1;
                break;
            }
        }
        return ans;
    }

int main()
{
    vector<int> nums = {2,1,5,0,4,6};
    increasingTriplet(nums);
    return 0;
}