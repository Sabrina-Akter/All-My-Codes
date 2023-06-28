#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums) {
        int i, sum1=0, sum2=0;
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                sum1+=nums[i];
            }
            else
            {
                sum2+=nums[i];
            }
        }
        return max(sum1,sum2);
    }

int main()
{
    vector <int> v = {3,1,2,4};
    rob(v);
    return 0;
}
