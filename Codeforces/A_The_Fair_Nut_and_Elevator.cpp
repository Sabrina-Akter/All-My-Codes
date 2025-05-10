#include <bits/stdc++.h>
using namespace std;

int n, i, a, s;

int main()
{
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        s += a * i;
    }
    cout << 4 * s;
    return 0;
}