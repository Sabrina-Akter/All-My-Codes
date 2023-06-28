#include<stdio.h>
int main()
{
    int x,y,a[6],i;

    scanf("%d", &x);

    y = x;

    if(x%2==0)
    {
        y = x+1;
    }

    for(i=0;i<6;i++)
    {
        a[i] = y;
        y = y+2;
    }
    for(i=0;i<6;i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}
