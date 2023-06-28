#include <stdio.h>
int main()
{
    int t,n,i,j,x,y;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        int ar[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &ar[j]);
        }
        int b[n-1];
        x=0;
        for(j=0;j<=n-1;j++)
        {
            b[x]=ar[j]+ar[j+1];
            x++;
        }
        for(j=0;j<x-1;j++)
        {
            if(b[j]<b[j+1])
            {
                y = b[j];
                b[j+1]=b[j];
            }
        }
        printf("%d\n",y);
    }
    return 0;
}
