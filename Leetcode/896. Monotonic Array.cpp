#include <bits/stdc++.h>
using namespace std;

    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)
        {
            return true;
        }
        int i, f1=0, f2=0, n = nums.size();
        vector <int> as(n), ds(n);
        for(i=0;i<n;i++)
        {
            as[i] = nums[i];
        }
        sort(as.begin(), as.end());
        ds = as;
        reverse(ds.begin(), ds.end());
        for(i=0;i<n;i++)
        {
            if(nums[i]!=as[i])
            {
                f1=1;
            }
            if(nums[i]!=ds[i])
            {
                f2=1;
            }
        }
        if(f1==0 || f2==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

int main()
{
    

    return 0;
}