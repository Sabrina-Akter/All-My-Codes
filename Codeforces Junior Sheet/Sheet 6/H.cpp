#include <bits/stdc++.h>
using namespace std;
long long a, b, x, y, z;
int main()
{
    cin >> a >> b;
    x = __gcd(a,b);
    y = (a/(__gcd(a,b)));
    z = y * b;
    cout << x << " " << z;
    return 0;
}

