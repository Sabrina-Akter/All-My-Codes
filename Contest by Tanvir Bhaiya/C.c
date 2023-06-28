#include <stdio.h>

int main()
{
    int t,n,i,f,x,j,k;
    int A[200], B[200];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        f = 0;
        int A[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &A[j]);
        }
        x = -1;
        for(j=0;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if((A[j]+A[k])%2==0)
                {
                    f++;
                }
                else
                {
                    x++;
                    B[x]=k;
                }
            }
        }
        if(f==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",f);
        for(j=0;j<x+1;j++)
        {
            printf("%d ", B[j]);
        }
        printf("\n");
        }
    }
    return 0;
}
