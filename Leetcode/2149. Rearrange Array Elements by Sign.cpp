#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        int i;
        vector<int> pos, neg, ans;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        for(i=0;i<nums.size()/2;i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }

int main()
{
    vector<int> v = {3,1,-2,-5,2,-4};

    return 0;
}