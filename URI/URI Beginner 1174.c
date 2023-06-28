#include <stdio.h>

int main()
{
    double n, A[100];
    int j=0;

    while(1)
    {
        scanf("%lf", &n);
        if(n<=10)
        {
            printf("A[%d] = %.1lf\n", j, n);
        }
        j++;
        if(j==100)
            break;
    }
    return 0;
}
