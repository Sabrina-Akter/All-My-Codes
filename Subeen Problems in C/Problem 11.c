#include <stdio.h>

int main()
{
    int t, i, n;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        long long int p = 1;
        for(int j=n; j>=1; j--)
        {
            p = p*j;
        }
        printf("%lld\n", p);
    }
    return 0;
}
