#include <stdio.h>

int main()
{
    int t,i,x,y,z1=0,z2,a;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d", &x, &y);
        z2 = x + y;
        if(z2>z1)
        {
            z1 = z2;
            a = z2;
        }
        else
        {
            a = z1;
        }
    }

    printf("%d\n", a);

    return 0;
}
