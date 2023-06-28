#include <stdio.h>
#include <string.h>

int main()
{
    int t,n,i,j,l,f;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        f = 0;
        scanf("%d\n", &n);
        int a[n];
        int b[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
        }
        n = n-1;
        for(j=0;j<=n;j++)
        {
            if(a[j]!=a[n])
            {
                f=1;
                break;
            }
            n--;
        }
        if(f==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
