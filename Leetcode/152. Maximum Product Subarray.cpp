#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int pro1 = 1, pro2 = 1, mx = INT32_MIN, i;
    for(i=0;i<nums.size();i++)
    {
        pro1*=nums[i];
        pro2*=nums[i];
        mx = max(mx, pro1);
        mx = max(mx, pro2);
        if(pro1<=0)
        {
            pro1 = 1;
        }
        if(pro1==0)
        {
            pro2 = 1;
        }
    }
    cout << mx << endl;
    return mx;
    }

int main()
{
    vector <int> nums = {-2,2,-2,2,-2};
    maxProduct(nums);
    return 0;
}