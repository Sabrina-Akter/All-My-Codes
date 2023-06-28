#include <stdio.h>

int main()
{
    int t,a,b,c,i,count=0;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        count++;
        if(a<=20 && b<=20 && c<=20)
        {
            printf("Case %d: good\n", count);
        }
        else
        {
            printf("Case %d: bad\n", count);
        }
    }
    return 0;
}
