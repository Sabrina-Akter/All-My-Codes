#include<stdio.h>

main()
{
    float f;
    double d;
    long double ld;
    scanf("%f",&f);
    scanf("\n%lf",&d);
    scanf("\n%lLf",&ld);
    printf("\n%f", f);
    printf("\n%lf", d);
    printf("\n%Lf", ld);
    return 0;
}

