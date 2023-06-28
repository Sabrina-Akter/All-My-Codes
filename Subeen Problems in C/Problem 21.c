#include <stdio.h>
#include <string.h>
int main()
{
    char A[1001], B, C[1001];
    int t,i,l,j,k,a;
    scanf("%d", &t);
    scanf("%c", &B);
    for(i=0;i<t;i++)
    {
        gets(A);
        l = strlen(A);
        k = l-1;
        a = 0;
        for(j=k;j>=0;j--)
        {
            C[a]=A[j];
            a++;
        }
        C[l]='\0';
        printf("%s\n", C);
    }
    return 0;
}
