#include <stdio.h>
int main()
{
    double n,t;
    scanf("%lf", &n);
    if(n<=2000.00)
    {
        printf("Isento\n");
    }
    else if(n>=2000.01)
    {
        t = (8.00/100.00)*(n-2000);
        printf("R$ %lf\n",t);
        if(n>=3000.01 && n<=4500.00)
        {
            t = t+(18.00/100.00)*(n-3000.00);
            printf("R$ %lf\n",t);
            if(n>4500)
            {
                t = t+t+(28.00/100.00)*(n-4500);
                printf("R$ %lf\n",t);
            }
        }
    }
    return 0;
}
