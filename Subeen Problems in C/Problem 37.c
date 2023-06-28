#include <stdio.h>
#include <string.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    char A[t][100000];
    int N[t];
    for(i=0;i<t;i++)
    {
        scanf("%s", A[i]);
    }
    for(i=1;i<t;i++)
    {
        N[i]=strcmp(A[i-1],A[i]);
        printf("%d\n", N[i]);
    }
    return 0;
}
