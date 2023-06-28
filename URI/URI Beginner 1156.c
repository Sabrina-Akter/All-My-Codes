#include <stdio.h>

int main()
{
    double i,sum=1;
    for(i=1;i<39;i=i*2)
    {
        sum = sum + ((i+1)/i);
    }
    printf("%.2lf\n", sum);
    return 0;
}
