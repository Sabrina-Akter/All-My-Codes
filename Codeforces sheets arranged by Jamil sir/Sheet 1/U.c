#include <stdio.h>

int main()
{
    double x;
    scanf("%lf", &x);

    if(x>=0.00 && x<=25.00)
    {
        printf("Interval [0,25]\n");
    }
    else if(x>25.00 && x<=50.00)
    {
        printf("Interval (25,50]\n");
    }
    else if(x>50.00 && x<=75.00)
    {
        printf("Interval (50,75]\n");
    }
    else if(x>75.00 && x<=100.00)
    {
        printf("Interval (75,100]\n");
    }
    else
    {
        printf("Out of Intervals\n");
    }

    return 0;
}
