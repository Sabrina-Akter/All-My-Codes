#include <stdio.h>

int main()
{
    int n, x, i=1, sum =0, p;
    scanf("%d", &n);

    for(i=2;i<n;i++)
    {
        p = i * 2;
        if(p>n)
        {
            break;
        }
        sum++;
    }
    printf("%d\n", sum+n);

    return 0;
}
