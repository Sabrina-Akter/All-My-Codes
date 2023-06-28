#include <stdio.h>

int main()
{
    int n,i,x,sum=1;

    scanf("%d", &n);

    if((n%3)==0)
    {
        x = ((n*2)/3);
        printf("%d\n", x);
    }
    else
    {
        if((n%2)==0)
        {
            for(i=2;i<n;i++)
            {
                if((i%3)==0)
                {
                    continue;
                }
                else if((i%2)==0)
                {
                    sum = sum + 2;
                }
            }
            printf("%d\n", sum);
        }
        else if((n%2)!=0)
        {
            for(i=1;i<n;i++)
            {
                if((i%3)==0)
                {
                    continue;
                }
                else if((i%2)!=0)
                {
                    sum = sum + 2;
                }
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}
