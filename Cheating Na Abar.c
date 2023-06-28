#include<stdio.h>
int main()
{
    int t,i;
    long long int n;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld", &n);
        if((n%10==0) && (n%20==0))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
