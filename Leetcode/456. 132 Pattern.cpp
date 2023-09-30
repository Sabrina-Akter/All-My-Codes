#include <bits/stdc++.h>
using namespace std;

    bool find132pattern(vector<int>& nums) {
        stack<int> s;
        int third = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < third) return true;
            while (!s.empty() && s.top() < nums[i]) {
                third = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }

int main()
{
    vector<int> nums = {1,2,3,4};
    find132pattern(nums);
    return 0;
}