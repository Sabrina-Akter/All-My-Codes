#include<stdio.h>

main()
{
    float cm;
    printf("Enter the length in centimeter: ");
    scanf("%f", &cm);
    printf("The converted length in inch scale: %f", cm/2.54);
    return 0;
}

