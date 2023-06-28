#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, n, j, a, b, c, x, y;
    cin >> t;
    for(i=0;i<t;i++)
    {
        x = 0;
        y = 0;
        cin >> n;
        for(j=0;j<n;j++)
        {
            cin >> a >> b >> c;
            x = a*c;
            y = x + y;
        }
        cout << y << endl;
    }
    return 0;
}

