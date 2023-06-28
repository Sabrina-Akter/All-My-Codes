#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, n, i, x, y, f=0;
    cin >> a >> b >> n;
    for(i=0;i<n;i++)
    {
        x = a;
        a = a*10;
        if(a%b!=0)
        {
            a = ((a/b)+1)*b;
        }
        y = a/10;
        if(x!=y)
        {
            cout << "-1\n";
            f=1;
            break;
        }
        else
        {
            break;
        }
    }
    if(f==0)
    {
        cout << a;
        for(i=0;i<n-1;i++)
        {
            cout << "0";
        }
    }
    return 0;
}
