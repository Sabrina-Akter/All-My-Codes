#include <stdio.h>

int main()
{
    int x,y,i,sum;
    while(scanf("%d%d", &x, &y)==2)
    {
        if(x<1 || y<1)
            break;
        if(x>=y)
        {
            sum = 0;
            for(i=y;i<=x;i++)
            {
                printf("%d ",i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }
        else if(y>=x)
        {
            sum = 0;
            for(i=x;i<=y;i++)
            {
                printf("%d ",i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }
    }
    return 0;
}
