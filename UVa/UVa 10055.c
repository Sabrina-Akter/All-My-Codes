#include <stdio.h>
#include <math.h>
main()
{
    long long int x,y;
    while(scanf("%lld%lld", &x, &y) !=EOF) {
    printf("%d\n", abs(x-y));
    }
    return 0;
}
/*#include <stdio.h>

int main()
{
    long long int a, b;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {
        if(a > b)
            printf("%lld\n", a - b);
        else
            printf("%lld\n", b - a);
    }
    return 0;
}*/
