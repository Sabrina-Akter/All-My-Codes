#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,i;
    long long int b, f, p, d;
    double t1, t2;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%lld%lld", &a, &b);
        p = pow(a,b);
        t1 = p/10;
        f = floor(t1);
        t2 = f * 10;
        d = p - t2;
        printf("%lld\n", d);
    }
    return 0;
}
