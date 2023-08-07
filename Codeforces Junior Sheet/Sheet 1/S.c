#include <stdio.h>

int main()
{
    int n,a,b,y,m;

    scanf("%d", &n);

    y = n/365;
    a = n%365;
    m = a/30;
    b = a%30;

    printf("%d years\n%d months\n%d days\n",y, m, b);

    return 0;
}
