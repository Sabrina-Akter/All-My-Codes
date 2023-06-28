#include <stdio.h>

int main()
{
    int x,y,n,i;
    double z,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            a=x;
            b=y;
            z = a/b;
            printf("%.1lf\n", z);
        }
    }
    return 0;
}

