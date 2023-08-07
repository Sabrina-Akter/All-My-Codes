#include <stdio.h>

int main()
{
    long long  a, b, c, max, min;
    scanf("%lld%lld%lld", &a, &b, &c);
    if(a>b && b>c)
    {
        max = a;
        if(b>c)
        {
            min = c;
        }
        else
        {
            min = b;
        }
    }
    else if(b>a && b>c)
    {
        max = b;
        if(a>c)
        {
            min = c;
        }
        else
        {
            min = a;
        }
    }
    else if(c>b && c>a)
    {
        max = c;
        if(b>a)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    }
    printf("%lld %lld\n", min, max);
    return 0;
}
