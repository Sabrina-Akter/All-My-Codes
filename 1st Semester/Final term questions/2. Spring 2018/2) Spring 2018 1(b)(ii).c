#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k, x=10;
    for(i=0;i<5;++i)
    {
        for(j=0;j<i;++j)
        {
            k=(i+j-1);
            if (k%2==0)
                x+=k;
            else if (k%3==0)
                x+=k-2;
            printf("\nx=%d", x);
        }
        printf("\n");
    }
    printf("\nx = %d", x);
    return 0;
}
