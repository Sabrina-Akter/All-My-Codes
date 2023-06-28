#include <stdio.h>

int main()
{
    int n,j,sum=0;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        if(n%2==1 || n%2==-1)
        {
            n = n+1;
        }
        for(j=0;j<5;j++)
        {
            sum = sum + n;
            n = n + 2;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
