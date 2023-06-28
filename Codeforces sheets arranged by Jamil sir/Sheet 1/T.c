#include <stdio.h>

int main()
{
    long long A, B, C, D;
    scanf("%lld%lld%lld%lld", &A, &B, &C, &D);

    if(A<B && A<C && A<D)
    {
        printf("A\n");
    }
    else if(B<A && B<C && B<D)
    {
        printf("B\n");
    }
    else if(C<B && C<A && C<D)
    {
        printf("C\n");
    }
    else if(D<B && D<C && D<A)
    {
        printf("D\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}
