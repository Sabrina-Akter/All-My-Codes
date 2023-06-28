#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int n = nums.size();
        int left = 0, right = n-1, mid, L, R, ans, t;
        while(left<=right)
        {
            mid = (left+right)/2;
            L = mid-1, R = mid+1;
            int X, Y;
            if(L>=0)
            {
                X = nums[L];
            }
            else
            {
                X = -1;
            }
            if(R<n)
            {
                Y = nums[R];
            }
            else
            {
                Y = -1;
            }
            if(X==nums[mid])
            {
                t = L-0+1;
                if(t%2==0)
                {
                    right = mid-1;
                }
                else
                {
                    left = mid+1;
                }
            }
            else if(Y==nums[mid])
            {
                t = n-1-R+1;
                if(t%2==0)
                {
                    left = mid+1;
                }
                else
                {
                    right = mid-1;
                }
            }
            else
            {
                mid = (left+right)/2;
                ans = nums[mid];
                break;
            }
        }
        return ans;
    }

int main()
{
    vector <int> v = {1,2,2,3,3};
    singleNonDuplicate(v);

    return 0;
}