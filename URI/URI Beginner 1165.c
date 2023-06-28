#include <stdio.h>

int main()
{
    int t,n,i,j,flag;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        scanf("%d", &n);
        flag = 0;
        for(i=2;i<=(n/2);i++)
        {
            if(n%i==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("%d nao eh primo\n", n);
        }
        else
        {
            printf("%d eh primo\n",n);
        }
    }

    return 0;
}
