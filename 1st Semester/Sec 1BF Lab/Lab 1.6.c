#include<stdio.h>
#include<math.h>

main()
{
    float A, B;
    printf("Enter the lengths of the two sides: ");
    scanf("%f%f", &A, &B);
    printf("The hypotenuse of the triangle: %f\n", sqrt((A*A)+(B*B)));
    return 0;
}
