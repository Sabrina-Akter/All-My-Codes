#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,d,sum,s;

    while(scanf("%d%d",&n,&k)==2)
    {
        sum = n;
        while(1)
        {
            if(n>=k)
            {
                d=n/k;
                s = n-(k*d);
                n = d + s;
                sum = sum + d;
            }
            else
            {
                break;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
