#include <stdio.h>

int main()
{
    int t,i,j,x,y,sum = 0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        if(x%2==0)
        {
            x = x+1;
        }
        for(j=0;j<y;j++)
        {
            sum = sum + x;
            x = x + 2;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
