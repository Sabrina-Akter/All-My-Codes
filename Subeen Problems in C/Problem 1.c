#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, i;
    long long int n;
    scanf("%d", &T);
    for(i=0;i<T;i++)
    {
        scanf("%lld", &n);
        if(n>=0)
        {
                    if(n%2==0)
                    {
                        printf("even\n");
                    }
                    else
                    {
                        printf("odd\n");
                    }
        }

    }
    return 0;
}
