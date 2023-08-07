#include <stdio.h>
#include <math.h>
#define pi acos(0.0)*2
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        double n,r,R;
        scanf("%lf%lf",&n,&R);
        r = (n*sin(pi/R))/(1+sin(pi/R));
        printf("%.10lf\n", r);
        if((r*1.0)/(r)!=1)
        {
            printf("Case %d: %.10lf\n", i, r);
        }
        else
        {
            printf("Case %d: %.0lf\n", i, r);
        }
    }
    return 0;
}
