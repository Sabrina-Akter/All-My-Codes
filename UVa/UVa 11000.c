#include <stdio.h>

int main()
{
    long long n;
        while(1)
        {
            scanf("%lld", &n);
            if(n==-1)
            {
                break;
            }
            long long i, f=0;
            long long sum=0;
            long long x[60];
            x[0]=1;
            x[1]=1;
            for(i=1;i<n+1;i++)
            {
                sum = x[i-1] + x[i];
                x[i+1] = sum;
            }
            printf("%lld %lld\n", x[n], x[n+1]);
        }
        return 0;
}
