#include <stdio.h>

void swap(int *m, int *n);
int main()
{
    int a,b;
    a = 5;
    b = 10;
    swap(&a, &b);
    printf("a=%d and b=%d",a,b);
    return 0;
}

void swap(int *m, int *n)
{
    int o;
    o = *m;
    *m = *n;
    *n = o;
}
