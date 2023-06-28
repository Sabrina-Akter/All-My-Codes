#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        int i, n = nums.size()/3;
        vector<int> v;
        map <int, int> m, m2;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>n && m2[nums[i]]==0)
            {
                v.push_back(nums[i]);
                m2[nums[i]]=1;
            }
        }
        return v;
    }

int main()
{
    vector<int> nums={1,2,3,1,2,3,1,2,3,3};
    majorityElement(nums);

    return 0;
}