#include <stdio.h>

int main()
{
    int a, b, c, x, y, z, g, g_p, b1, b2;
    scanf("%d%d%d", &a, &b, &c);
    scanf("%d%d%d", &x, &y, &z);

    if(x>=a)
    {
        g = x - a;
        g_p = g + y;
        if(g_p>=b)
        {
            b1 = g_p - b;
            b2 = b1 + z;
            if(b2>=c)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
