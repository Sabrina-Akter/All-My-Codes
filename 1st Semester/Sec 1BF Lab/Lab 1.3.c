#include<stdio.h>
#include<math.h>

main()
{
    float F, C;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = (5.0/9.0)*(F-32);
    printf("The converted temperature in Celsius scale: %f", C);
    return 0;
}
