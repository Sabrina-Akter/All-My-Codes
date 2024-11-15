#include <bits/stdc++.h>
using namespace std;

int findLengthOfShortestSubarray(vector<int>& arr) 
{
    int n = arr.size();
    vector<int> v;
    v.push_back(arr[0]);
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] >= arr[i - 1])
            v.push_back(arr[i]);
        else
            break;
    }
    int cnt = 0, x, mx = 0;
    for (int i = n - 1; i >= 0; i--) 
    {
        if (i < n - 1 && arr[i] > arr[i + 1])
            break;
        cnt++;
        auto it = upper_bound(v.begin(), v.end(), arr[i]);
        if(it == v.end())
        {
            it--;
            if(it - v.begin() + 1 >= i) x = n - cnt;
            else x = it - v.begin() + 1;
        }
        else if(it == v.begin())
        {
            x = 0;
        }
        else
        {
            if(it - v.begin() >= i) x = n - cnt;
            else x = it - v.begin();
        }
        cout << arr[i] << " " << x << " " << cnt << endl;
        mx = max(mx, cnt + x);
    }
    return ((n - v.size()) < (n - mx)) ?(n - v.size()) : (n - mx);
}

int main()
{
    

    return 0;
}