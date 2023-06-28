#include <stdio.h>

int main()
{
    int first=1, i, fibo;

    for(i=0;i<=5;i++)
    {
        fibo = first;
        first = first + fibo;
    }
    printf("%d", fibo);

    return 0;
}
