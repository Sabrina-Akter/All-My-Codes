#include<stdio.h>
#include<math.h>

main()
{
    float X, Y, Z;
    printf("Enter the marks of the student: ");
    scanf("%f%f%f", &X, &Y, &Z);
    printf("The total marks of the student: %f\n", X+Y+Z);
    printf("The average marks of the student: %f", (X+Y+Z)/3);
    return 0;
}
