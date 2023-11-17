#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int minPairSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int ans = 0; 
        int ptr1 = 0;
        int ptr2 = nums.size() - 1;
        while(ptr1 < ptr2)
        {
            ans = max(ans, (nums[ptr1] + nums[ptr2]));
            ptr1++;
            ptr2--;
        }
        return ans;
    }
};

int main()
{
    

    return 0;
}