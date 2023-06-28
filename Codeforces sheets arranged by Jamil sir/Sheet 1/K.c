#include <stdio.h>

int main()
{
    int n;
    float d, sum;
    scanf("%d%f", &n, &d);
    if(n==1)
    {
        sum = d*4.00;
    }
    else if(n==2)
    {
        sum = d*4.50;
    }
    else if(n==3)
    {
        sum = d*5.00;
    }
    else if(n==4)
    {
        sum = d*2.00;
    }
    else if(n==5)
    {
        sum = d*1.50;
    }
    printf("Total: R %.2f\n", sum);
    return 0;
}
