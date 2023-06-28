#include<stdio.h>
#include<math.h>

int main()
{
    int m,n,o,i,x=1;
    scanf("%d%d", &m, &o);
    n = abs(m-o);
    for(i=0;i<1000;i++)
    {
        if(n%2==0)
        {
            x++;
            n = n/2;
            if(n==1)
            {
                break;
            }
        }
        else if(n%2!=0)
        {
            x++;
            n = ((3*n)+1);
            if(n==1)
            {
                break;
            }
        }
    }
    printf("%d", x);
    return 0;
}
