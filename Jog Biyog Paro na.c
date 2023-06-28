#include <stdio.h>
int main()
{
    int t,x,i=1,y,m,k,j,sum=0,c=1;

    scanf("%d", &t);

    for(m=0;m<t;m++)
    {
    scanf("%d%d", &x, &y);
        for(j=1;j<=(2*y);j++)
        {
            if(i==x)
            {
                break;
            }
            sum = sum - i;
            i=i+y;
            sum = sum + i;
            i=i-(y-1);
        }
    printf("Case %d: %d\n",c,sum);
    sum = 0;
    i=1;
    c++;
    }
    return 0;
}
