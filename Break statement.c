#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=10;a<=30;a++)
    {
        if(a%8==0)
        {
            printf("%d is divisible by 8.", a);
            break;
        }
    }
    return 0;
}
