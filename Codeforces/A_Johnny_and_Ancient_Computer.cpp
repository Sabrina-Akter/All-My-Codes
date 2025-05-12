#include <bits/stdc++.h>
using namespace std;

long long t, a, b, k, i = 1;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        k = 0;

        if (a > b) swap(a, b);

        while (b > a)
        {
            a *= 2;
            k++;
        }

        if (a == b)
            cout << (k / 3 + min(i, k % 3));
        else
            cout << -1;

        cout << '\n';
    }
    return 0;
}
