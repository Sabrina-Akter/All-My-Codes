#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool a[1000000];
bool b[1000000];
void func()
{
    long long i, j, n;
    memset(a, true, sizeof(a));
    memset(b, false, sizeof(b));
    for(i=3;i*i<=1000000;i++)
    {
        if(a[i]==true)
        {
            for(j=i*i;j<=1000000;j=j+i)
            {
                a[j] = false;
            }
        }
    }
    b[0] = true;
    b[1] = true;
    b[2] = true;
    for(i=3;i<=1000000;i=i+2)
    {
        if(a[i]==true)
        {
            b[i] = true;
        }
    }
    cin >> n;
        for(i=4;i<=1000000;i++)
        {
            if((b[n-i]==false) && (b[i]==false))
            {
                cout << i << " " << (n-i) << endl;
                break;
            }
        }
}
int main()
{
    func();
    return 0;
}
