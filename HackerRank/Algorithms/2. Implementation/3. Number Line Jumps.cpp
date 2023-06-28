#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, i, flag=0;
    cin >> a >> b >> c >> d;
    for(i=0;i<=1000000;i++)
    {
        a = a + b;
        c = c + d;
        if(a==c)
        {
            flag = 1;
            cout << "YES" << endl;
            break;
        }
    }
    if(flag==0)
    {
        cout << "NO" << endl;
    }
    return 0;
}
