#include <stdio.h>

int main()
{
    int x,y,i,j,k=1,l=0,m=1;
    scanf("%d%d",&x,&y);

    for(i=0;i<=y;i++)
    {
        for(j=1;j<=x;j++)
        {
            if(m==1)
            {
               printf("%d",k);
               m++;
            }
            else
            {
            printf(" %d",k);
            }
            k++;
            if(k==y+1)
                {
                l=1;
                break;
                }
        }
        printf("\n");
        m=1;
        if(l==1)
            break;
    }

    return 0;
}
