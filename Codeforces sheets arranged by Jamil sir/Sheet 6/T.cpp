#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x, y, z, r, n, a, b, X, Y, Z;
    cin >> x >> y >> r >> n;
    while(n--)
    {
        cin >> a >> b;
        X = (a-x)*(a-x);
        Y = (b-y)*(b-y);
        Z = sqrt(X+Y);
        if(Z<=r)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
