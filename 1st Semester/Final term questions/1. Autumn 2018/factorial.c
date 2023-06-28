#include<stdio.h>

int main()
{
    int n,i,j=1;
    scanf("%d", &n);
    for(i=n;i>1;i--)
    {
        j=i*j;
    }
    printf("Factorial of %d is %d", n, j);
    return 0;
}
