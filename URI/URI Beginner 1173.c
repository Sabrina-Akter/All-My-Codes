#include <stdio.h>

int main()
{
    int n,i,product;
    scanf("%d", &n);
    product = n;
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,product);
        product = product * 2;
    }
    return 0;
}
