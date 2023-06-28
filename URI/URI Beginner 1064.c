#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,sum=0.00,f1,f2;
    int count=0;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    if(a>0 || b>0 || c>0 || d>0 || e>0 || f>0)
    {
    if(a>0)
    {
        count++;
        sum = a;
    }
    if(b>0)
    {
        count++;
        sum = sum + b;
    }
    if(c>0)
    {
        count++;
        sum = sum + c;
    }
    if(d>0)
    {
        count++;
        sum = sum + d;
    }
    if(e>0)
    {
        count++;
        sum = sum + e;
    }
    if(f>0)
    {
        count++;
        sum = sum + f;
    }
    f1 = count;
    f2 = (sum/f1);
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", f2);
    }
}
