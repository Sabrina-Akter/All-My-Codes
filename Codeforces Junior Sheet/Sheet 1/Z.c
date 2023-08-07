#include <stdio.h>

int main()
{
    long long a,b,c,d,n,x,y;

    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    n = a*b*c*d;
    x=n%10;
    y=(n/10)%10;
    printf("%lld%lld\n", y,x);
    return 0;
}
