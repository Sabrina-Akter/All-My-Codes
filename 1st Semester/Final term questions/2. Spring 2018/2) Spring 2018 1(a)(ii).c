#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=100, n=1;
    while (i>0)
    {
        if(i%2 != 0)
        {
        printf("%d ", i);
        }
        i--;
    }

    return 0;
}
