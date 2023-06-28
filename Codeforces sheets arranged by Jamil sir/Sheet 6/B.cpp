#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j,flag=0;
    cin >> n;
    int prime[n+1];

    for(i=0;i<=n;i++)
    {
        if(i==0 || i==1)
        {
            prime[i] = 0;
        }
        else
        {
            prime[i] = 1;
        }
    }
    for(i=2;i*i<=n;i++)
    {
        for(j=2;i*j<=n;j++)
        {
            prime[i*j] = 0;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(prime[i]==1)
        {
            if(i==n)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout << "NO\n";
    }

    return 0;
}
