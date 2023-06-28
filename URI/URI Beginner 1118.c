#include <stdio.h>

int main()
{
    int n;
    double x,y,z,flag=-1,count=-1,s=-1;
    while(scanf("%lf", &x)==1)
    {
        if(x<0.0 || x>10.0)
        {
            printf("nota invalida\n");
        }
        else if((x>=0.0 && x<=10.0))
        {
            while(scanf("%lf", &y)==1)
            {
                if(y<0.0 || y>10.0)
                {
                    printf("nota invalida\n");
                }
                else if((y>=0.0 && y<=10.0))
                {
                    z = (x+y)/2.0;
                    printf("media = %.2lf\n",z);
                    printf("novo calculo (1-sim 2-nao)\n");
                    while(scanf("%d",&n)==1)
                    {
                    if(n!=1 && n!=2)
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                    }
                    if(n==2)
                    {
                        flag++;
                        break;
                    }
                    if(n==1)
                    {
                        count++;
                        break;
                    }
                    }
                    if(count==0)
                    {
                        s++;
                        break;
                    }
                }

                if(s==0)
                {
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
