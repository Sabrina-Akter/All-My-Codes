#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool a[1000009];
bool b[1000009];
ll n, x, y;
void func()
{
    long long i, j;
    memset(a, true, sizeof(a));
    memset(b, false, sizeof(b));
    for(i=3;i*i<=1000009;i++)
    {
        if(a[i]==true)
        {
            for(j=i*i;j<=1000009;j=j+i)
            {
                a[j] = false;
            }
        }
    }
    b[0] = false;
    b[1] = false;
    b[2] = true;
    for(i=3;i<=1000009;i=i+2)
    {
        if(a[i]==true)
        {
            b[i]=true;
        }
    }
}
int main()
{
    func();
    while(1)
    {
        cin >> n;
        if(n==0)
        {
            break;
        }
        x = n;
        while(x--)
        {
            y = n-x;
            if((b[x]==true) && (b[y]==true))
            {
                cout << n << " = " << y << " + " << x << endl;
                break;
            }
        }
    }
    return 0;
}
