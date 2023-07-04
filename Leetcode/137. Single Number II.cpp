#include <bits/stdc++.h>
using namespace std;

    int singleNumber(vector<int>& nums) {
        map <int, int> m;
        int i, ans;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==3)
            {
                m.erase(nums[i]);
            }
        }
        auto it = m.begin();
        ans = it->first;
        return ans;
    }

int main()
{
    vector<int> nums = {0,1,0,1,0,1,99};
    singleNumber(nums);
    return 0;
}