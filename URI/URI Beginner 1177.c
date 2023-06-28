#include <stdio.h>

int main()
{
    int n,i,j,k=0;
    scanf("%d", &n);
    for(i=0;k<1000;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("N[%d] = %d\n", k, j);
            k++;
            if(k==1000)
                break;
        }
    }
    return 0;
}
