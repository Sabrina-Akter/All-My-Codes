#include <stdio.h>

int main()
{
    int t, j, s = 0;
    scanf("%d", &t);
    for(j=0;j<t;j++)
    {
        long long i, n, f=0;
        long long sum=0;
        long long x[60];
        x[0]=1;
        x[1]=1;
        scanf("%lld", &n);
        for(i=1;i<=51;i++)
        {
            sum = x[i-1] + x[i];
            x[i+1] = sum;
            f++;
            if(f==n)
            {
                s++;
                printf("Scenario #%d:\n", s);
                printf("%lld\n\n", sum);
                break;
            }
        }
    }
}
