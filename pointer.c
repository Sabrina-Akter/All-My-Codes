#include <stdio.h>

int main()
{
    int x = 5, y =10, *p=&x;
    printf("Value of x = %d", x);
    printf("\nAddress of x = %d", &x);
    printf("\nAddress of p = %d", p);
    printf("\nContent of p = %d", *p);
    printf("\nAddress of p = %d", &p);

    return 0;
}
