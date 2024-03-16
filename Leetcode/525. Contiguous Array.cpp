#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int findMaxLength(vector<int>& nums) 
    {
        int mx = 0;
        unordered_map <int, int> pos;
        int sum = 0;
        pos[0] = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if(nums[i] == 0)
            {
                sum -= 1;
            }

            if(pos.count(sum) == true) 
            {
                mx = max(mx, i - pos[sum]);
            }
            else
            {
                pos[sum] = i;
            }
        }
        return mx;    
    }
};

int main()
{
    

    return 0;
}