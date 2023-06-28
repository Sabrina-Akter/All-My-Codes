#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int left=0, right=height.size()-1, lmax = 0, rmax = 0, mn=0, sum=0, x=0;

    while(left<right)
    {
        lmax = max(height[left], lmax);
        rmax = max(height[right], rmax);
        mn = min(lmax, rmax);
        if(height[left]<=height[right])
        {
            left++;
            x = mn-height[left];
            if(x>0)
            {
                sum+=x;
            }
        }
        else
        {
            right--;
            x = mn-height[right];
            if(x>0)
            {
                sum+=x;
            }
        }
    }
    return sum;   
    }

int main()
{
    vector<int> height = {1};
    trap(height);
    return 0;
}