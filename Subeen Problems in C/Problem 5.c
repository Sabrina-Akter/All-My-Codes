#include <stdio.h>

int main()
{
    int t,i,j,k,n;

    scanf("%d", &t);

    for(i=1;i<=t;i++)
    {
        scanf("%d", &n);
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    if(i<t)
    {
        printf("\n");
    }
    }
    return 0;
}
