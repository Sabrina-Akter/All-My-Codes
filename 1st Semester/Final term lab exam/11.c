#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    float c, d;

    printf("Enter the unit: ");
    scanf("%d", &n);

    if(n<250)
    {
        c = 90;
    }
    else if(n>=250)
    {
        m = n - 250;
        c = 90 + (4.5*n) + (7*m);
    }

    printf("\nCharge = %.2f Taka.\n", c);

    return 0;
}
