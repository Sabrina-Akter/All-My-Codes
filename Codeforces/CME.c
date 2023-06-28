#include <stdio.h>

int main()
{
    int t,i,n;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d", &n);

        if(n==1)
        {
            printf("3\n");
        }
        else if(n==2)
        {
            printf("2\n");
        }
        else if(n%2==0)
        {
            printf("0\n");
        }
        else if(n%2!=0)
        {
            printf("1\n");
        }
    }

    return 0;
}
