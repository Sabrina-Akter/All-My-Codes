#include<stdio.h>
int main()
{
    int m,n,i;
    for(i=1;i<=4;i++)
    {
        for(m=1;m<=i;m++)
        {
            if(m!=1)
            {
                printf(" ");
            }
        }
        for(n=4;n>=i;n--)
        {
            printf("C");
        }
        printf("\n");
    }
    return 0;
}
