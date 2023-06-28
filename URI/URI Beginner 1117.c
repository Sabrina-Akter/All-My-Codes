#include <stdio.h>
int main()
{
    double x,y,z,flag=-1;
    while(scanf("%lf", &x)==1)
    {
        if(x<0 || x>10)
        {
            printf("nota invalida\n");
        }
        else if((x>=0 && x<=10))
        {
            while(scanf("%lf", &y)==1)
            {
                if(y<0 || y>10)
                {
                    printf("nota invalida\n");
                }
                else if((y>=0 && y<=10))
                {
                    z = (x+y)/2;
                    printf("media = %.2lf\n",z);
                    flag++;
                    break;
                }
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    return 0;
}
