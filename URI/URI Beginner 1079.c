#include <stdio.h>
int main()
{
    double x,y,z;
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%lf%lf%lf", &x, &y, &z);
        printf("%.1lf\n", (((x*2.0)+(y*3.0)+(z*5.0))/10.0));
    }
    return 0;
}
