#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,x=0;
    do
    {
        if(i%3==0)
        {
            x++;
            printf("%d ", x);
        }
        i++;
    }
    while(i<11);
    printf("\nx=%d", x);
    return 0;
}
