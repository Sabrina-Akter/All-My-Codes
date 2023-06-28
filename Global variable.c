#include <stdio.h>
#include <stdlib.h>

int number = 2;

void print_something()
{
    printf("I have %d books.", number);
    return;
}

int main()
{
    printf("I have %d apples.\n", number);
    print_something();
    return 0;
}
