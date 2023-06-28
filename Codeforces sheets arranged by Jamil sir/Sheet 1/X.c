#include <stdio.h>

int main()
{
    int a,b;
    char c,x,y;
    scanf("%d%c%c%c%d", &a, &x, &c, &y, &b);
    if((c=='=' && a==b) || (c=='>' && a>b) || (c=='<' && a<b))
    {
        printf("Right\n");
    }
    else
    {
        printf("Wrong\n");
    }
    return 0;
}
