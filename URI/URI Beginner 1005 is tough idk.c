#include <stdio.h>
main ()
{
    double A, B, MEDIA;
    scanf("%lf %lf",&A, &B);
    MEDIA = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("Media = %.5lf\n", MEDIA);
    return 0;
}