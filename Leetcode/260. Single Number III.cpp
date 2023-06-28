#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int>& nums) {
        int i;
        map<int,int>m;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]==2)
            {
                m.erase(nums[i]);
            }
        }
        vector<int>ans;
        for(auto it=m.begin();it!=m.end();it++)
        {
            ans.push_back((*it).first);
        }
        return ans;
    }

int main()
{
    vector<int> nums = {1,2,1,3,2,5};
    singleNumber(nums);
    return 0;
}