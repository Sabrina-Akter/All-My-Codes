#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);

int main()
{
    int x = 2, y =3;
    printf("The sum of x and y is %d", sum(x,y));
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
