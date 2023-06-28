#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k = 1000;
    for(j=200;j>=1;j--)
    {
        for(i=1;i<=5;i++)
        {
            printf("%d\t", k);
            k--;
        }
        printf("\n");
    }
    return 0;
}
