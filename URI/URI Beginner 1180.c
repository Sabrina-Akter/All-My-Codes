#include <stdio.h>

int main()
{
    int i,n,x,location1=1;
    scanf("%d", &n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        A[i]=x;
    }
    for(i=0;i<n;i++)
    {
        if(A[location1]>A[i])
        {
            location1 = i;
        }
    }
    printf("Menor valor: %d\n", A[location1]);
    printf("Posicao: %d\n", location1);

    return 0;
}
