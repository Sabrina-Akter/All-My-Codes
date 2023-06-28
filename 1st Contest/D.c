#include <stdio.h>
int main()
{
    int t,i,a,b,c=1,d;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d", &a, &b);
        if(b>=a)
        {
            d = (b*4)+19;
            printf("Case %d: %d\n", c, d);
        }
        else
        {
            d = ((a-b)*4)+(a*4)+19;
            printf("Case %d: %d\n", c, d);
        }
        c++;
    }
}
