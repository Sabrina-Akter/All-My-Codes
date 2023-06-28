#include<stdio.h>

int main()
{
    int a = 5, *pointer;
    pointer = &a;

    printf("The value of a is %d.\n", *pointer);
    printf("The address of a is %d.\n", pointer);

    return 0;
}
