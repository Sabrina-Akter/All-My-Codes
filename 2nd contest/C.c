#include <stdio.h>

int main()
{
    int t,a,b,c,i,count=0;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        count++;
        if(a>b && a>c)
        {
            if(b<c)
            {
                printf("Case %d: %d\n", count, c);
            }
            else if(c<b)
            {
                printf("Case %d: %d\n", count, b);
            }
        }
        else if(b>a && b>c)
        {
            if(a<c)
            {
                printf("Case %d: %d\n", count, c);
            }
            else if(c<a)
            {
                printf("Case %d: %d\n", count, a);
            }
        }
        else if(c>a && c>b)
        {
            if(a<b)
            {
                printf("Case %d: %d\n", count, b);
            }
            else if(b<a)
            {
                printf("Case %d: %d\n", count, a);
            }
        }
    }
    return 0;
}
