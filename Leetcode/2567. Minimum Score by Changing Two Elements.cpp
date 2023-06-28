#include <bits/stdc++.h>
using namespace std;

int minimizeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a, b, c, ans;
        a = nums[nums.size()-2] - nums[1];
        b = nums[nums.size()-1] - nums[2];
        c = nums[nums.size()-3] - nums[0];
        ans = min(a, min(b, c));
        cout << ans << endl;
        return ans;
    }

int main()
{
    vector <int> v = {1,4,3};
    minimizeSum(v);
    return 0;
}