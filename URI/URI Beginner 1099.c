#include <stdio.h>

int main()
{
    int x,y,t,i,j,sum=0;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        sum = 0;
        if(y>=x)
        {
            for(j=x+1;j<y;j++)
            {
                if(j%2!=0)
                {
                    sum = sum + j;
                }
            }
            printf("%d\n", sum);
        }
        else if(x>=y)
        {
            for(j=y+1;j<x;j++)
            {
                if(j%2!=0)
                {
                    sum = sum + j;
                }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}

