#include <stdio.h>

int main()
{
    int a, b, c, t, i;
    double cr, rr;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        cr = b/((300.0-c)/6.0);
        rr = ((a+1.0)-b)/(c/6.0);
        printf("%.2lf %.2lf\n", cr, rr);
    }
    return 0;
}
