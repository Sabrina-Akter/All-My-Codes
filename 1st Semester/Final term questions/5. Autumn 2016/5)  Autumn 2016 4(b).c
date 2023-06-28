#include <stdio.h>
#include <stdlib.h>

void passing_by_value(int a);
void passing_by_reference(int *a);

int main()
{
    int b = 5;

    passing_by_value(b);
    printf("%d\n", b);

    passing_by_reference(&b);
    printf("%d", b);

    return 0;
}

void passing_by_value(int a)
{
    a = 20;
    return;
}

void passing_by_reference(int *a)
{
    *a = 30;
    return;
}
