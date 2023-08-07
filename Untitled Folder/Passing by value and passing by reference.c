#include <stdio.h>

void PassingByValue(int a)
{
    a = 5;
    return;
}

void PassingByReference(int *b)
{
    *b = 10;
    return;
}

int main()
{
    int n = 20;
    PassingByValue(n);
    printf("Passing by value, value of n is now = %d.\n", n);

    PassingByReference(&n);
    printf("Passing by reference, value of n is now = %d.\n", n);
    return 0;
}
