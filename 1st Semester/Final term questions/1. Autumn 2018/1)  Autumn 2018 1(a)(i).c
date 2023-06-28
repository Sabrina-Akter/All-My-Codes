#include <stdio.h>

int main()
{
    /*int n=1,i;
    for(i=1;i<=6;i++)
    {
        if(i==1)
        {
            printf("%d",n);
            n = n + i;
        }
        else
        {
            printf(",%d",n);
            n = n + i;
        }

    }*/
    int i, sum = 1;

    for(i=0;i<6;i++)
    {
        sum = sum + i;
        printf("%d ", sum);
    }
    return 0;
}

