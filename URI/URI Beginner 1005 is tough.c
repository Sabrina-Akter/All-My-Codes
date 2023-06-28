#include <stdio.h>
main ()
{
    double A, B, C, D, MEDIA;
    scanf("%lf %lf",&A, &B);
    C = A * 3.5;
    D = B * 7.5;
    MEDIA = (C+D)/(3.5+7.5);
    printf("Media = %.5lf\n", MEDIA);
    return 0;
}
