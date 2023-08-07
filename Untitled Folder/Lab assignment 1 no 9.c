#include <stdio.h>
#include <math.h>
main()
{
    float a,b,c,x1,x2,m;
    printf("Enter the values of a, b, and c: ");
    scanf("%f%f%f",&a,&b,&c);
    m = sqrt(pow(b,2)-(4*a*c));
    x1 = (-b+m)/(2*a);
    x2 = (-b-m)/(2*a);
    printf("The values of roots are:\nx1 = %f\nx2 = %f",x1,x2);

    return 0;
}
