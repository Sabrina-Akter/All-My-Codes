#include <stdio.h>
#include <string.h>

int main()
{
    char A[10];
    char B[10];

    gets(A);

    int l = strlen(A);

    int i,j=-1,length=0;

    for(i=0;i<l;i++)
    {
        if((A[i]>64 && A[i]<91) || (A[i]>96 && A[i]<123))
           {
               j++;
               length++;
               B[j]=A[i];
               printf("%c",B[j]);
           }
        if(A[i]=='\0')
        {
            j++;
            B[j] == '\0';
        }
    }
    printf("\n%d\n", j);
    printf("\n%d\n", length);
    B[length];

    printf("\n%s\n",B);

    return 0;
}
