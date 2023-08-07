#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
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
            cout << i << endl;
        }
    }

    return 0;
}
