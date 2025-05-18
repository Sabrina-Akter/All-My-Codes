#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a[2] = {0}, u = 0, n;
        cin >> n;

        while (n)
        {
            if (n % 2 == 0 && ((n / 2) % 2 || n == 4))
            {
                a[u % 2] += n / 2;
                n /= 2;
            }
            else
            {
                n--;
                a[u % 2]++;
            }
            u++;
        }
        cout << a[0] << '\n';
    }
    return 0;
}