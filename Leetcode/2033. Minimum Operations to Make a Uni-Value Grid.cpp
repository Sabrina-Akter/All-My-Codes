#include <bits/stdc++.h>
using namespace std;

int ans = INT_MAX;
void f(vector<int>& v, int target, int x)
{
    int sum = 0;
    for(int i = 0; i < v.size(); i++) sum += (abs(target - v[i]) / x);
    if(sum == 12)
    {
        cout << target << endl;
    }
    ans = min(ans, sum);
    return;
}

int minOperations(vector<vector<int>>& grid, int x) 
{
    vector<int> v;
    int mod = grid[0][0] % x;

    for (auto& row : grid) 
    {
        for (int num : row) 
        {
            if (num % x != mod) return -1;
            v.push_back(num);
        }
    }

    long long m1, m2, m3, n = v.size();
    sort(v.begin(), v.end());
    if(n % 2 != 0)
    {
        int mid = v[n / 2];
        f(v, mid, x);
    }
    else
    {
        int mid2 = v[n / 2], mid1 = v[(n / 2) - 1];
        for(int i = mid1; i <= mid2; i++) if(i % x == mod)  f(v, i, x);
    }
    return ans;       
}

int main()
{
    

    return 0;
}