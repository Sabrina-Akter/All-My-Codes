#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int i, sum=0, mx=INT_MIN, ans=INT_MIN;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            ans = max(ans, sum);
            mx = max(mx, nums[i]);
            if(sum<0)
            {
                sum = 0;
            }
        }
        if(sum<0)
        {
            ans = mx;
        }
        return ans;
    }

int main()
{
    vector <int> v = {0, -3, -4, -2, -6};
    cout << maxSubArray(v) << endl;
    return 0;
}