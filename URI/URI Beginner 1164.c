#include <stdio.h>

int main()
{
    int n,t,i,j,sum=0;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d", &n);
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum = sum + i;
            }
        }
        if(sum==n)
        {
            printf("%d eh perfeito\n",n);
        }
        else
        {
            printf("%d nao eh perfeito\n",i);
        }
        sum = 0;
    }
    return 0;
}
