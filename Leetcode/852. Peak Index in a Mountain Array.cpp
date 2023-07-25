#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int left = 0, right = arr.size(), mid, ans, t=5;
    while (left < right)
    {
        double L = left, R = right, check;
        check = (L + R) / 2;
        mid = (left + right) / 2;
        if (mid != check)
        {
            mid++;
        }
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ans = mid;
            break;
        }
        else if (arr[mid]<arr[mid+1])
        {
            left = mid;
        }
        else if (arr[mid]<arr[mid-1])
        {
            right = mid - 1;
        }
    }
    return ans;
}

int main()
{
    //vector<int> arr = {0, 10, 5, 2};
    vector<int> arr = {0,1,2,3,4,5,6,7,8,9,1,0};
    peakIndexInMountainArray(arr);
    return 0;
}