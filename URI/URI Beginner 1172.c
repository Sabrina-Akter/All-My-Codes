#include <stdio.h>

int main()
{
    int n,i;
    for(i=0;i<10;i++)
    {
        scanf("%d", &n);
        if(n<1)
        {
            n = 1;
        }
        printf("X[%d] = %d\n",i,n);
    }
    return 0;
}
