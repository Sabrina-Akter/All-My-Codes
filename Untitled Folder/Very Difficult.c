#include <stdio.h>
#include <limits.h>

int main()
{
    int t,n,x,i,j,k, min = INT_MIN, max = INT_MAX, MIN, MAX, p1, p2;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        int A[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &A[j]);
        }
        for(j=0;j<n;j++)
        {
            if(min<A[j])
            {
                min = A[j];
                MAX = min;
                p1 = j;
            }
            if(max>A[j])
            {
                max = A[j];
                MIN = max;
                p2 = j;
            }
        }
        if(p1>p2)
        {
            printf("%d %d\n", MIN, MAX);
        }
        else if(p2>p1)
        {
            printf("%d %d\n", MAX, MIN);
        }
        min = INT_MIN;
        max = INT_MAX;
    }

    return 0;
}
