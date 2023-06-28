#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int> > ans;
        int i, x;
        for(i=0;i<nums.size();i++)
        {
            if(ans.size()<k)
            {
                ans.push(nums[i]);
            }
            else
            {
                x = ans.top();
                if(nums[i]>x)
                {
                    ans.pop();
                    ans.push(nums[i]);
                }
            }
        }
        cout << ans.top() << endl;
        return ans.top();
    }

int main()
{
    vector<int>nums = {3,2,3,1,2,4,5,5,6};
    int k = 8;
    findKthLargest(nums, k);
    return 0;
}