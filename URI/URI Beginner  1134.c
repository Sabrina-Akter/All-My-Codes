#include <stdio.h>

int main()
{
    int x,a=0,b=0,c=0;

        while(scanf("%d", &x)==1)
        {
        if(x==1)
        {
            a++;
        }
        else if(x==2)
        {
            b++;
        }
        else if(x==3)
        {
            c++;
        }
        else if(x==4)
        {
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
