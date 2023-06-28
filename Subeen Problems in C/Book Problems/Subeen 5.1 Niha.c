#include <stdio.h>
int main()
{
    int x, y, a, b;
    printf("Enter X+Y: ");
    scanf("%d", &a);
    printf("\nEnter X-Y: ");
    scanf("%d", &b);

    x = (a+b)/2;
    y = a-x;

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    return 0;
}
