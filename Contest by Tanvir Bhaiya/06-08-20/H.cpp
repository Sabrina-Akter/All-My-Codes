#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, f=10, c, x, n, i, y=0;
    cin >> a >> b;
    n = b;
    while(1)
    {
        if(b/10!=0)
        {
            f = f*10;
            b = b/10;
        }
        else
        {
            break;
        }
    }
    c = ((a*f) + n);
    for(i=1;i<=10000;i++)
    {
        if(c==(i*i))
        {
            y = 1;
            break;
        }
    }
    if(y==0)
    {
        cout << "No\n";
    }
    else if(y==1)
    {
        cout << "Yes\n";
    }
    return 0;
}
