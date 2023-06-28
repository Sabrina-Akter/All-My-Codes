#include<stdio.h>

main()
{
    float A,B;
    printf("Enter any two integers: ");
    scanf("%f%f", &A, &B);
    printf("The addition of the integers %f and %f is: %f\n", A, B, A+B);
    printf("The subtraction of the integers %f and %f is: %f\n", A, B, A-B);
    printf("The multiplication of the integers %f and %f is: %f\n", A, B, A*B);
    printf("The division of the integers %f and %f is: %f\n", A, B, A/B);
    return 0;
}
