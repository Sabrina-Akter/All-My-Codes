#include <stdio.h>
int main()
{
    int t, n, i, j, k, flag;
    long long int m;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        int A[n];
        for(j=0;j<n;j++)
        {
            scanf("%lld", &m);
            A[j]=m;
        }
        flag = 0;
        for(j=0;j<n;j++)
        {
            for(k=(j+1);k<n;k++)
            {
                if(k==n)
                {
                    break;
                }
                if((A[j]+A[k])==(A[j]*A[k]))
                {
                    flag++;
                }
            }
        }
        printf("%d\n", flag);
    }
    return 0;
}
