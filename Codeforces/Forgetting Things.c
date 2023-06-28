#include <stdio.h>

int main()
{
    int x,y,a,b;

    scanf("%d%d", &x, &y);

    if((x==y) || (y==(x+1)))
    {
        if(x==y)
        {
            b=(100*y)+10;
            a=b-1;
        }
        else if(y==(x+1))
        {
            b=(100*y);
            a=b-1;
        }
        printf("%d %d\n",a,b);
    }
    else if(x>y)
    {
        if(((x*10)+10) == (y*100))
        {
            b=(y*100);
            a=b-1;
            printf("%d %d\n",a,b);
        }
        else
        {
            printf("-1\n");
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
