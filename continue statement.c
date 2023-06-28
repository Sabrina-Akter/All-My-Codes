#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=1;a<=5;a++)
    {
        if(a==2 || a==4)
        {
            continue;
        }
        printf("Seat number-%d is available.\n", a);
    }
    return 0;
}
