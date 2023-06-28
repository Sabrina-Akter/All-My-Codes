#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,count,l,j;
    char A[10001],c;
    scanf("%d", &t);
    scanf("%c", &c);
    for(i=0;i<t;i++)
    {
        gets(A);
        l = strlen(A);
        count = 0;
        for(j=1;j<l;j++)
        {
            if(A[j-1]==' ' && A[j]!=' ')
            {
                count++;
            }
        }
        printf("Count = %d\n", count+1);
    }
    return 0;
}
