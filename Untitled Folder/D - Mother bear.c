#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    while(1)
    {
        char A[100000];
        gets(A);
        if(strcmp("DONE", A)==0)
        {
            break;
        }
        int count=0, l = strlen(A);
        for(i=0;i<l;i++)
        {
            if((A[i]>64 && A[i]<91) || (A[i]>96 && A[i]<123))
            {
                count++;
            }
        }
        char B[count];
        char C[count];
        int j=0;
        for(i=0;i<l;i++)
        {
            if((A[i]>64 && A[i]<91) || (A[i]>96 && A[i]<123))
            {
                B[j]=tolower(A[i]);
                j++;
            }
        }
        B[j]='\0';
        strcpy(C,B);
        if(strcmp(B,strrev(C))==0)
        {
            printf("You won't be eaten!\n");
        }
        else if(strcmp(B,C)!=0)
        {
            printf("Uh oh..\n");
        }
    }
    return 0;
}
