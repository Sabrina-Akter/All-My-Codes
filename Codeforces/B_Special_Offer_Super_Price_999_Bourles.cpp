#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long p, d, e, i;
    cin >> p >> d;
    e = ++p;
    i = 10;

    while (p % i <= d)
    {
        e = p - p % i;
        i *= 10;
    }

    cout << e - 1;
    return 0;
}
