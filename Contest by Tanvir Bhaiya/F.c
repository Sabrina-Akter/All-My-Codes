#include <stdio.h>

int main()
{
    int t,i,n,j,f;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        int N[n];
        f=0;
        for(j=0;j<n;j++)
        {
            scanf("%d", &N[j]);
            if((N[j-2]==N[j]) || (N[j-1]==N[j-2]) && (N[j-3]==N[j]))
            {
                f=1;
            }
        }
        for(j=0;j<n-3;j++)
        {
            if(N[j+2]==N[j])
            {
                f=1;
            }
        }
        for(j=0;j<n-4;j++)
        {
            if((N[j+1]==N[j+2]) && (N[j+3]==N[j]))
            {
                f=1;
            }
        }
        if(f==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
