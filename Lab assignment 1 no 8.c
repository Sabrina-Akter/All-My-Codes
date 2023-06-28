#include <stdio.h>
#include <math.h>
main()
{
    float x,Y,m;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    m = (x-1)/x;
    Y = m + (pow(m,2)/2) + (pow(m,3)/3) + (pow(m,4)/4);
    printf("Sum of the polynomial is %f",Y);
    return 0;
}
