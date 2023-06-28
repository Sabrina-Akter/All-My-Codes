#include<stdio.h>
#include<math.h>

main()
{
    float r, pie = 3.1416;
    printf("Enter the value of radius: ");
    scanf("%f", &r);
    printf("The area of a circle: %f\n", pie*r*r);
    printf("The circumferance of a circle: %f", 2*pie*r);
    return 0;
}

