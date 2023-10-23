#include <bits/stdc++.h>
using namespace std;

//TC = O(n)
//SC = O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i], nums[index]);
                index++;
            }
        }
    }
};

int main()
{
    

    return 0;
}