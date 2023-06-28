#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, P, Ar;
    scanf("%f%f%f", &A, &B, &C);
    if(A+B>C && B+C>A && C+A>B)
    {
        P = A+B+C;
        printf("Perimetro = %.1f\n", P);
    }
    else
    {
        Ar = ((A+B)/2)*C;
        printf("Area = %.1f\n", Ar);
    }

    return 0;
}
