#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int ans = -1, left = 0, right = nums.size()-1, mid;
        if(nums.size()==1)
        {
            if(nums[0]==target)
            {
                ans = 0;
            }
            return ans;
        }
        while(left<=right)
        {
            mid = (left+right)/2;
            int mid_plus_one, mid_minus_one;
            if((mid+1)<nums.size())
            {
               mid_plus_one = nums[mid+1]; 
            }
            else
            {
                mid_plus_one = 100000;
            }
            if((mid-1)>=0)
            {
               mid_minus_one = nums[mid-1]; 
            }
            else
            {
                mid_plus_one = -100000;
            }
            if(nums[mid]==target)
            {
                ans = mid;
                break;
            }
            else if(mid_plus_one<=target && nums[right]>=target && mid_plus_one<=nums[right])
            {
                left = mid+1;
            }
            else if(nums[left]<=target && mid_minus_one>=target && nums[left]<=mid_minus_one)
            {
                right = mid-1;
            }
            else if(nums[left]>mid_minus_one)
            {
                right = mid-1;
            }
            else if(mid_plus_one>nums[right])
            {
                left = mid+1;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
        return ans;
    }

int main()
{
    vector <int> v = {3,4,5,6,1,2};
    int t = 0;
    search(v, t);
    return 0;
}