#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double t, o1, o2, a1, a2, b1, b2, x, y, r, m, n, d, T1, T2, D;
    long long c=0;
    cin >> t;
    while(t--)
    {
        c++;
        cin >> o1 >> o2 >> a1 >> a2 >> b1 >> b2;
        x = a1 - o1;
        if(x<0)
        {
            x = x * (-1);
        }
        y = a2 - o2;
        if(y<0)
        {
            y = y * (-1);
        }
        r = sqrt((x*x)+(y*y));
        m = b1 - a1;
        if(m<0)
        {
            m = m * (-1);
        }
        n = b2 - a2;
        if(n<0)
        {
            n = n * (-1);
        }
        d = sqrt((m*m)+(n*n));
        T1 = ((r*r)+(r*r)-(d*d))/(2*r*r);
        T2 = acos(T1);
        D = r * T2;
        cout << "Case " << c << ": ";
        cout << fixed << setprecision(8) << D << endl;
    }
    return 0;
}

