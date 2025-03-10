#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll M=10e9+7;

ll count(string a, string b)
{
    ll m = a.length();
    ll n = b.length();
    ll lookup[m + 1][n + 1] = { { 0 } };
    for (ll i = 0; i <= n; ++i)
        lookup[0][i] = 0;
    for (ll i = 0; i <= m; ++i)
        lookup[i][0] = 1;
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = ((lookup[i - 1][j - 1]) + (lookup[i - 1][j]))%M;

            else
                lookup[i][j] = (lookup[i - 1][j])%M;
        }
    }

    return (lookup[m][n]);
}

int main()
{
    string a, b = "chokudai";
    cin >> a;

    cout << count(a, b);

    return 0;
}
