#include <stdio.h>

int main()
{
    int i,x=5, y=50;
    for(i=1;x<=y;i++)
    {
        printf("%d", x);
        y=y/x;
    }
    return 0;
}
