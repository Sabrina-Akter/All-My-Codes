#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,l,j,n;
    char A[10000];
    scanf("%d\n", &t);
    for(i=0;i<t;i++)
    {
        gets(A);
        l = strlen(A);
        n = (l/2)+1;
        for(j=0;j<l;j++)
        {
            if((A[j]>64 && A[j]<91) || (A[j]>96 && A[j]<123))
            {
                A[j]=A[j]+3;
            }
        }
        char B[l];
        strcpy(B,A);
        int k=0;
        for(j=(l-1);j>=0;j--)
        {
            B[j]=A[k];
            k++;
        }
        B[l]='\0';
        for(j=(n-1);j<l;j++)
        {
            B[j]=B[j]-1;
        }
        printf("%s\n", B);
    }
    return 0;
}
