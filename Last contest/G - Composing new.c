#include <stdio.h>

int main()
{
    int x,y,a,b,c,i;
    scanf("%d%d", &x, &y);
    a = x-1;
    b = y+a;
    c = y-a;
    for(i=c;i<=b;i++)
    {
        printf("%d ", i);
    }
}