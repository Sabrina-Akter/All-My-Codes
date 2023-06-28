#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, max, min, mid;
    printf("Enter the lengths of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    max = ((a>b) ? (a>c ? a : c) : (b>c ? b : c));
    min = ((a<b) ? (a<c ? a : c) : (b<c ? b : c));
    mid = a+b+c-max-min;

    printf("Maximum = %d\nMiddle = %d\nMinimum = %d\n", max, mid, min);

    return 0;
}
