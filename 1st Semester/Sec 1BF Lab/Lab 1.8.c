#include<stdio.h>
#include<math.h>

main()
{
    float x, y, m;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    m = (x-1)/x;
    y = m + ((m*m)/2) + ((m*m*m)/3) + ((m*m*m*m)/4);
    printf("The value of the polynomial: %f\n", y);
    return 0;
}
