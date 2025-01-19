#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<tuple<ll, ll, ll>, ll> C;
        ll a, b, c, A = 0;
        cin >> b >> c;
        while (n-- > 2)
        {
            a = b;
            b = c;
            cin >> c;
            A += ++C[{0, b, c}] + ++C[{a, 0, c}] + ++C[{a, b, 0}] - ++C[{a, b, c}] * 3;
        }
        cout << A << endl;
    }
    return 0;
}
