#include <stdio.h>

int main()
{
    int n,z=1;
    double sum=0.0,av;
    while(1)
    {
        scanf("%d", &n);
        sum2 = sum + n;
        sum = sum2 + n;
        z++;
        if(n<0)
        {
            break;
        }
    }
    av = (sum/z);
    printf("%.2lf\n", av);
    return 0;
}
