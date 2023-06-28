#include <stdio.h>
int main()
{
    int N[5][5]={{1,2,9,10,25},{4,3,8,11,24},{5,6,7,12,23},{16,15,14,13,22},{17,18,19,20,21}};
    int t,n,i,j,k,x,y,count=0;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        count++;
        for(j=0;j<5;j++)
        {
            for(k=0;k<5;k++)
            {
                if(n==N[j][k])
                {
                    x=j;
                    y=k;
                    break;
                }
            }
        }
        printf("Case %d: %d %d\n", count, x+1, y+1);
    }
    return 0;
}
