#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n,j,x,a,b;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        int N[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &N[j]);
        }
        a = -1;
        b = 100;
        for(j=0;j<n;j++)
        {
            if(a<N[j])
            {
                a = N[j];
            }
        }
        for(j=0;j<n;j++)
        {
            if(b>N[j])
            {
                b = N[j];
            }
        }
        printf("%d\n", ((a-b)*2));
    }
    return 0;
}
