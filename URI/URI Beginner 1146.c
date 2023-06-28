#include <stdio.h>

int main()
{
    int n,i;

    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        for(i=1;i<n;i++)
        {
            printf("%d ",i);
        }
        printf("%d\n",n);
    }
    return 0;
}
