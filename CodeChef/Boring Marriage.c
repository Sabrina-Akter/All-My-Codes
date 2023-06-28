#include <stdio.h>
int main()
{
    int a , b, c;

    scanf("%d%d", &a, &b);

    if((a>=-100) && (b<=100))
    {
        if(a<0 || b>=a)
        {
            c = b - (a);
        }
        else if (a>=b)
        {
            c = a - b;
        }
        printf("%d\n", c);
    }

    return 0;
}
