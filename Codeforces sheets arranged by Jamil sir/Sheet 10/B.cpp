#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, j, n = 0, flag = 0;
    cin >> a >> b;
    for(j=a+1;j<=b;j++)
    {
        for(i=2;i<=sqrt(b);i++)
    {
        if(a%i==0 && j%i==0)
        {
            flag = 1;
            break;
        }
        if(flag==1)
        {
            break;
        }
    }
    }
    if(flag==1)
    {
        cout << a << " " << a+1 << " " << j-1 << endl;
    }
    else
    {
        cout << "-1\n";
    }
    return 0;
}
