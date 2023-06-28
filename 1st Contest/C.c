#include <stdio.h>
int main()
{
    long long int a,b,d;
    int t,c=1;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%lld%lld", &a, &b);
        d = (a*b)/2;
        printf("Case %d: %lld\n", c, d);
        c++;
    }
    return 0;
}
