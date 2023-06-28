#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c, x, y, z, sum;
    cin >> a >> b >> c;
    x = sqrtl(a);
    y = sqrtl(b);
    z = sqrtl(c);
    sum = x+y;
    if(sum < z)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}
