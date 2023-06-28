#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, countodd = 0;
    scanf("%d", &N);
    for(i=1;i<=N;i++)
    {
        if((i%2)!=0)
            countodd++;

    }
    printf("%d", countodd);
    return 0;
}
