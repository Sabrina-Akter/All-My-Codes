#include <stdio.h>

int main()
{
    int a, b, c;
    double d;
    scanf("%d%d", &a, &b);
    d = (a/2);
    if(a==b)
    {
        c = 0;
    }
    if(b==0 || b==1)
    {
        c = 1;
    }
    else if(d>=b && b>1)
    {
        c = b;
    }
    else if(b>d && b>1)
    {
        c = a - b;
    }

    printf("%d\n", c);

    return 0;
}
