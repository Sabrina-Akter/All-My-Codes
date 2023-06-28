#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, i, j, k=1;
    int N;
    scanf("%d", &T);
    if(T<=10 && T>=1)
    {
        for(i=0;i<T;i++)
        {
            scanf("%d", &N);
            if(N<=100000 && N>=1)
                {
                    printf("Case %d:", k);
                    for(j=1;j<=N;j++)
                    {
                        if(N%j==0)
                        {
                            printf(" %d",j);
                        }
                        else
                            continue;
                    }
                    printf("\n");
                    k++;
                }
        }
    }

    return 0;
}
