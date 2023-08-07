#include <stdio.h>

int x=5;
int fun1()
{
    x = x+20;
    return x;
}
int fun2()
{
    int x = 10;
    return x;
}
int fun3()
{
    x = x-10;
    return x;
}

int main()
{
    x=1;
    printf("x=%d\n", x);
    printf("x=%d\n", fun1());
    printf("x=%d\n", fun2());
    printf("x=%d\n", fun3());
}
