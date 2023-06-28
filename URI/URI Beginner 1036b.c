#include <stdio.h>
#include <math.h>

int main()
{
    float A, B, C, D, E, R1, R2;
    scanf("%f%f%f", &A, &B, &C);
    D = 2*A;
    E = (B*B)-(4*A*C);
    R1 = (-B+sqrt(E))/D;
    R2 = (-B-sqrt(E))/D;

    if(D==0 || E<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
       printf("R1 = %.5f\n", R1);
       printf("R2 = %.5f\n", R2);
    }
    return 0;
}
