#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, i = 0, x;
    cin >> a >> b >> c;
    for(i=1;i<=c;i++)
    {
        b = b - (a*i);
    }
    x = -b;
    if(x<0)
    {
        x = 0;
    }
    cout << x << endl;
    return 0;
}
