#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vll vector<ll>
#define pb push_back

int main()
{
    ll t, n, m, c, i;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        i = 19;

        while (i--)
        {
            c = pow(10, i);

            if (c / gcd(c, n) <= m)
            {
                cout << m * n - n * m % lcm(c, n) << ' ';
                break;
            }
        }
    }

    return 0;
}