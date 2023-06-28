#include <stdio.h>

int main()
{
    int i, n, A, B;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d", &A, &B);
        if(A>B)
        {
            printf("A is the winner by %d runs", A-B);
        }
        else if(B>A)
        {
            printf("B is the winner by %d runs", B-A);
        }
        else
        {
            printf("A and B has drawn the match");
        }
    }
    return 0;
}
