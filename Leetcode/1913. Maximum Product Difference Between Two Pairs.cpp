#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    int maxProductDifference(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size() - 1;
        int first = nums[0];
        int second = nums[1];
        int third = nums[n - 1];
        int fourth = nums[n];
        int first_pair = first * second;
        int second_pair = third * fourth;
        return second_pair - first_pair;
    }
};

int main()
{
    

    return 0;
}