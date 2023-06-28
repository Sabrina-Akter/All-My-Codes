#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, i, n, j, count = 0;
    scanf("%d", &T);
    {
        for(i=0;i<T;i++)
        {
            scanf("%d", &n);
            for(j=1;j<=n/2;j++)
            {
                if((j*j)==n)
                {
                    count = 0;
                    break;
                }
                else
                {
                    count++;
                }
            }
            if(count==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }

        }
    }
    return 0;
}
