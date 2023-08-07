#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, Ai, Bi, i, N;

    scanf("%d", &n);
    int N[(n*2)-1];
    for(i=0;i<n;i++)
    {
        scanf("%d%d", &Ai, &Bi);
        N(i)= Ai;
        N(i+((2*n)/2)) = Bi;
    }
    return 0;
}
