#include <stdio.h>
int main()
{
    long long int a,b,c,d;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a>=b)
        {
            c = a;
            d = b;
        }
        else if(b>a)
        {
            c = b;
            d = a;
        }
        printf("%lld\n", (c-d));
    }
    return 0;
}
