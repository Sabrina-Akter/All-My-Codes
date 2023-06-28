#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int>& nums) {
       int i, size=nums.size();
       bool ans = false;
       for(i=0;;)
       {
            cout << i << endl;
            if(i>=size-1)
            {
                ans =  true;
                break;
            }
            else if(nums[i]==0)
            {
                ans = false;
                break;
            }
            else
            {
                i+=nums[i];
            }
       }
       return ans;
    }

int main()
{
    vector<int> v = {2,0};
    canJump(v);
    return 0;
}