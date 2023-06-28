#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int i, sum=0, cnt=0;
        unordered_map<int, int> m;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum==k)
            {
                cnt++;
            }
            if(m[sum-k]>=1)
            {
                cnt+=m[sum-k];
            }
            m[sum]++;
        }
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    vector<int> nums = {0,0,0,0,0,0,0,0,0,0};
    int k = 0;
    subarraySum(nums, k);
    return 0;
}