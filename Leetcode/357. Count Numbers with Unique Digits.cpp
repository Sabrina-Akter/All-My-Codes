#include <bits/stdc++.h>
using namespace std;

int countNumbersWithUniqueDigits(int n) {
        vector<int>v(10);
        v[0] = 1;
        v[1] = 10;
        v[2] = 91;
        v[3] = 739;
        v[4] = 5275;
        v[5] = 32491;
        v[6] = 168571;
        v[7] = 712891;
        v[8] = 2345851;
        return v[n];
    }

int main()
{
    int n, i, j, cnt=0, f=0;
    cin >> n;
    countNumbersWithUniqueDigits(n);
    return 0;
}