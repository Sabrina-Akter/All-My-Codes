#include <bits/stdc++.h>
using namespace std;

long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int i, inc=0, dec=0, f=0;
        for(i=0;i<nums1.size();i++)
        {
            if(nums1[i]>nums2[i])
            {
                if((nums1[i]-nums2[i])%k==0)
                {
                    dec+=((nums1[i]-nums2[i])/k);
                }
                else
                {
                    f=1;
                    break;
                }
            }
            else if(nums1[i]<nums2[i])
            {
                if((nums2[i]-nums1[i])%k==0)
                {
                    inc+=((nums2[i]-nums1[i])/k);
                }
                else
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0 && inc==dec)
        {
            return inc;
        }
        else
        {
            return -1;
        }
        
    }

int main()
{
    vector <int> v1 = {4,3,1,4}, v2 = {1,3,7,1};
    int k = 3;
    minOperations(v1, v2, k);

    return 0;
}