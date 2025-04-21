#include <bits/stdc++.h>
using namespace std;

int numberOfArrays(vector<int>& differences, int lower, int upper) 
{
    long long n = differences.size(), sum = 0, mn = 0, mx = 0;
    vector <long long> pref(n + 1);
    for(int i = 1; i < n + 1; i++)
    {
        sum += differences[i - 1];
        pref[i] = sum;
        mx = max(mx, pref[i]);
        mn = min(mn, pref[i]);
    }
    long long x = lower - mn, y = upper - mx;
    if(x > y) return 0;
    else return y - x + 1;
}

int main()
{
    

    return 0;
}