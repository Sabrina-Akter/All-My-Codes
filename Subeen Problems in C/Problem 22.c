#include <stdio.h>
int main()
{
    int t,a,b,i,count,j,k,flag;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d", &a, &b);
        count = 0;
        for(j=a;j<=b;j++)
        {
            flag = 0;
            if(j==1)
            {
                continue;
            }
            for(k=2;k<=(j/2);k++)
            {
                if(j%k==0)
                {
                    flag++;
                    break;
                }
            }
            if(flag==0)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
