#include <stdio.h>

int main()
{
    int a, b, c, x, y, z;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        x = a;
        if(b>c)
        {
            z = c;
            y = b;
        }
        else
        {
            z = b;
            y = c;
        }
    }
    else if(b>a && b>c)
    {
        x = b;
        if(a>c)
        {
            z = c;
            y = a;
        }
        else
        {
            z = a;
            y = c;
        }
    }
    else if(c>a && c>b)
    {
        x = c;
        if(a>c)
        {
            z = c;
            y = a;
        }
        else
        {
            z = a;
            y = c;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", z, y, x, a, b, c);
    return 0;
}
