#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n=1;
    for(i=100;i>0;i--)
    {
        if(i%2 != 0)
            printf("%d ", i);
    }
    return 0;
}
