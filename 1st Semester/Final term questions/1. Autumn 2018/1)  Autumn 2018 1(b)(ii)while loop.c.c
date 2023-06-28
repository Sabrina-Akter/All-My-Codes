#include <stdio.h>

int main()
{
    int x=5, y=50;
    while(x<=y)
    {
        printf("%d", x);
        y=y/x;
    }
    return 0;
}
