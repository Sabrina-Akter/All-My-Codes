#include <stdio.h>
#include <math.h>

int main()
{
    double n, x;
    scanf("%lf", &n);
    x = floor(n);
    if(n-x==0.0)
    {
        printf("long long %.0lf\n", n);
    }
    else
    {
        printf("double %.0lf %.3lf\n", x, n-x);
    }
    return 0;
}
