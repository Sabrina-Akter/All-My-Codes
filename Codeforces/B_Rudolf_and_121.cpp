#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t, n;
    for (cin >> t; t--;) 
    {
        int a = 0, b = 0, x;
        bool ok = true;
        for (cin >> n; n--;) 
        {
            cin >> x;
            ok &= (x >= a);
            a = 2*(x-a)+exchange(b, x-a);
        }
        ok &= (a == 0) && (b == 0);
        cout << (ok ? "YES\n" : "NO\n");
    }
}
