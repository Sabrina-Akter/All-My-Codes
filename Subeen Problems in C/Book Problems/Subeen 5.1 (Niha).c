#include <stdio.h>
int main()
{
    int x, y, a, b;
    printf("Enter X+Y: ");
    scanf("%d", &a);
    printf("\nEnter X-Y: ");
    scanf("%d", &b);

    y = (a+b)/2;
    x = a-y;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
