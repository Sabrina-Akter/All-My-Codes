#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, d, x, y;
    cin >> n >> d;
    if(n==1)
    {
        x = 4.00;
    }
    else if(n==2)
    {
        x = 4.50;
    }
    else if(n==3)
    {
        x = 5.00;
    }
    else if(n==4)
    {
        x = 2.00;
    }
    else if(n==5)
    {
        x = 1.50;
    }

    cout << "Total: R ";
    cout << fixed;
    cout <<  setprecision(2) << (d*x) << endl;
    return 0;
}
