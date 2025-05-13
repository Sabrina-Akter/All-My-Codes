#include <bits/stdc++.h>
using namespace std;

int h, k, m;
char x;

int main()
{
    cin >> h >> x >> m;
    while ((m % 10) * 10 + (m / 10) != h)
    {
        k++;
        if (++m > 59)
        {
            m = 0;
            h = (h + 1) % 24;
        }
    }
    cout << k;
    return 0;
}
