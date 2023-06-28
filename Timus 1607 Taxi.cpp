#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    while(1)
    {
        if(c<=a || a>=c)
        {
            cout << a << endl;
            break;
        }
        a = min(a + b, c);
        c = max(c - d, a);
    }
    return 0;
}
