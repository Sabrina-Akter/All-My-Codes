#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    if(nums.size()==1)
    {
        return true;
    }
    int i = nums.size() - 2, goal = nums.size() - 1;
    while (1)
    {
        int steps = goal - i;
        if (i == 0)
        {
            if (nums[0] >= steps)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        if (nums[i] >= steps)
        {
            goal = i;
            ;
        }
        i--;
    }
}

int main()
{
    vector<int> v = {2, 0, 1, 2, 0, 2, 0, 1, 2, 4};
    cout << canJump(v) << endl;
    return 0;
}