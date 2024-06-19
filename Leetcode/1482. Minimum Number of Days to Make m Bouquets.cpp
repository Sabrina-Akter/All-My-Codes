#include <bits/stdc++.h>
using namespace std;

bool possible(int mid, vector<int>& bloomDay, int m, int k)
{
    int temp = 0, cnt = 0;
    for(int i = 0; i < bloomDay.size(); i++)
    {
        if(bloomDay[i] <= mid)
        {
            temp++;
        }
        else
        {
            temp = 0;
        }
        if(temp == k)
        {
            cnt++;
            temp = 0;
        }
        if(cnt == m) return true;
    }
    return false;
}
int minDays(vector<int>& bloomDay, int m, int k) 
{
    int n = bloomDay.size();
    long long M = m, K = k, product = M * K;
    if(product > n) return -1;
    int mn = INT_MAX, mx = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        mn = min(mn, bloomDay[i]);
        mx = max(mx, bloomDay[i]);
    }
    int left = mn, right = mx, mid;
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(possible(mid, bloomDay, m, k))
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    

    return 0;
}