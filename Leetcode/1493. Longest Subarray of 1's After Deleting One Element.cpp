#include <bits/stdc++.h>
using namespace std;

    int longestSubarray(vector<int>& nums) {
        int i, f=0, turn = -1, count_zero=0, count_one=0, mx=0, cnt=0;
        vector <int> v_one;
        vector <int> v_zero;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                cnt++;
            }
            if(nums[i]==1)
            {
                f=1;
                count_one++;
                if(turn==1 && f==1)
                {
                    v_zero.push_back(count_zero);
                }
                count_zero=0;
                turn = 0;
            }
            if(nums[i]==0 && f==1)
            {
                count_zero++;
                mx = max(mx, count_one);
                if(turn==0)
                {
                    v_one.push_back(count_one);
                }
                count_one = 0;
                turn = 1;
            }
        }
        mx = max(mx, count_one);
        v_one.push_back(count_one);
        for(i=1;i<v_one.size();i++)
        {
            if(i-1<v_zero.size())
            {
                if(v_zero[i-1]==1)
                {
                    mx = max(mx, v_one[i-1]+v_one[i]);
                }
            }
        }
        if(cnt>0)
        {
            return mx;
        }
        else
        {
            return mx-1;
        }
    }

int main()
{
    vector<int> nums = {0,0,0,0,0,0};
    longestSubarray(nums);
    return 0;
}