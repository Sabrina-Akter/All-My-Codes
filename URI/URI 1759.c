#include <stdio.h>
int main()
{
    int n,i;

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("Ho");
        }
        else
        {
            printf(" Ho");
        }
    }
    printf("!\n");

    return 0;
}
