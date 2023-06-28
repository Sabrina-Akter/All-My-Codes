#include <stdio.h>
int main()
{
    int t,i,x,in=0,out=0;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&x);
        if(x>=10 && x<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
