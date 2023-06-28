#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  x, y, a, b, c, d;
    while(scanf("%d%d", &x, &y)==2)
    {
        if(x==-1 && y==-1)
        {
            break;
        }
        a = max(x,y);
        b = min(x,y);
        c = a - b;
        d = (100-a) + b;
        if(c<d)
        {
            cout << c << endl;
        }
        else if(d<c)
        {
            cout << d << endl;
        }
        else
        {
            cout << d << endl;
        }
    }
    return 0;
}
