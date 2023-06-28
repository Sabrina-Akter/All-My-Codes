#include<stdio.h>

int main()
{
    int n,k,d,sum;

    while(scanf("%d%d",&n,&k)==2)
    {
        sum = n;
        while(1)
        {
            if(n>=k)
            {
                d=n/k;
                sum = sum + d;
                n = n/k;
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
