#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i, j=0;
        for(i=m;i<m+n;i++)
        {
            nums1[i] = nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
        for(i=0;i<nums1.size();i++)
        {
            cout << nums1[i] << " ";
        }
    }

int main()
{
    // vector<int> v1 = {1,2,3,0,0,0};
    // vector<int> v2 = {2,5,6};
    vector<int> v1 = {1};
    vector<int> v2 = {};
    int m = 1, n = 0;
    merge(v1, m, v2, n);
    return 0;
}