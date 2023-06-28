#include <stdio.h>

int main()
{
    int n=1,i;
    for(i=1;i<=6;i++)
    {
        if(i==1)
        {
            printf("%d",n);
            n = n*3;
        }
        else
        {
            printf(",%d",n);
            n = n*3;
        }

    }
    return 0;
}

