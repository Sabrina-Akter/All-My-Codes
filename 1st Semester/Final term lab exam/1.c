#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max;

    printf("Enter the value of a, b and c respectively: ");
    scanf("%d%d%d", &a, &b, &c);

    max = (a>b) ? (a>c ? a : c) : (b>c ? b : c);

    printf("\nThe largest number is %d.\n", max);

    return 0;
}
