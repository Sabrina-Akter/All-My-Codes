#include <stdio.h>

int main()
{
    int n,x,i,j=0;
    scanf("%d", &n);

    int A[n+1];
    A[n]=1;

    for(i=0;i<n;i++)
    {
        scanf("%d", &x);
        A[i]=x;
    }

    for(i=0;i<n;i++)
    {
        if(A[i]==1 && A[i+1]!=0)
        {
            j++;
        }
        else if(A[i]==0)
        {
            j++;
        }
    }
    printf("%d\n",j);

    return 0;
}
