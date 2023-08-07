#include <stdio.h>

int main()
{
    int a,b,c;
    char d,e,f,g,h,i;
    scanf("%d%c%c%c%d%c%c%c%d", &a, &d, &e, &f, &b, &g, &h, &i, &c);
    if(e=='+')
    {
        if(a+b==c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", a+b);
        }
    }
    if(e=='-')
    {
        if(a-b==c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", a-b);
        }
    }
    if(e=='*')
    {
        if(a*b==c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%d\n", a*b);
        }
    }

    return 0;
}
