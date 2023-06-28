#include <stdio.h>

int main()
{
    int i,j;
    double a,b,sum=0.0;
    for(i=1;i<2;i++)
    {
        a = i;
        for(j=1;j<=100;j++)
        {
            b = j;
            sum = sum + (a/b);
        }
    }
    printf("%.2lf\n", sum);
    return 0;
}
