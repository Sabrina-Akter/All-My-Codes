#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter the lengths of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b && a==c && b==c)
    {
        printf("\nThe triangle is an equilateral triangle.\n");
    }
    else if(a==b || a==c || b==c)
    {
        printf("\nThe triangle is an isosceles triangle.\n");
    }
    else
    {
        printf("\nThe triangle is an scalene triangle.\n");
    }

    return 0;
}
