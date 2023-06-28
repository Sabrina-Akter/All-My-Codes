#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double fact(double N)
{
    double i;
    for(i=N-1;i>=2;i--)
    {
        N = N*i;
    }
    return N;
}

int main()
{
    double a, b, B, bb, ANS;
    double x, i, n;
    while(cin >> a >> b)
    {
        x = a, bb=b;
        if(a==0 && b==0)
        {
            break;
        }
        else if((b==0) || (a==b))
        {
            cout << a << " things taken " << b << " at a time is " << 1 << " exactly." << endl;
        }
        else if((b==1) || (b==a-1))
        {
            cout << a << " things taken " << b << " at a time is " << a << " exactly." << endl;
        }
        else
        {
            n = x/2;
            if(b<n)
            {
                B = fact(b);
                b = a-b;
            }
            else
            {
                B = fact(a-b);
            }
            for(i=a-1;i>b;i--)
            {
                a = a*i;
            }
            ANS = a/B;
            cout << x << " things taken " << bb << " at a time is " << fixed << setprecision(0) << ANS << " exactly." << endl;
        }
    }
    return 0;
}
