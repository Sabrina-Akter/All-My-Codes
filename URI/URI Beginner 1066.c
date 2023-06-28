#include <stdio.h>
int main()
{
    int a[5], i, positive=0, negative=0, odd=0, even=0;
    scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);

    for(i=0;i<5;i++)
    {
        if(a[i]>0)
        {
            positive++;
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if(a[i]<0)
        {
            negative++;
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        else if(a[i]==0)
        {
            even++;
        }

    }

    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);

    return 0;
}
