#include <stdio.h>
int main()
{
    int t,i,n,j,x;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        int A[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &x);
            A[j]=x;
        }
        int sum1=0, sum2=0, two=0, zero=0;
        for(j=0;j<n;j++)
        {
            if(A[j]==0)
            {
                zero++;
            }
            if(A[j]==2)
            {
                two++;
            }
        }
        for(j=0;j<zero;j++)
        {
            sum1 = sum1 + j;
        }
        for(j=0;j<two;j++)
        {
            sum2 = sum2 + j;
        }
        printf("%d\n", sum1+sum2);
    }
    return 0;
}
