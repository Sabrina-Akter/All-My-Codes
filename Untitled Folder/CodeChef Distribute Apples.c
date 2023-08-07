#include <stdio.h>

int main()
{
    int t, N, K, i, j;
    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d", &N, &K);
        if((K*K)<=N)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}
