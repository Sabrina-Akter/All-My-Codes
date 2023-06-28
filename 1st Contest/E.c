#include <stdio.h>
int main()
{
    int a,b,i,j,c=0;
    scanf("%d%d", &a, &b);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if((i*j)==b)
            {
                c++;
                break;
            }
        }
    }
    printf("%d\n", c);
    return 0;
}
