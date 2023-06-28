#include <stdio.h>
#include <string.h>

int main()
{
    char A[100];
    char B[100];
    char C[100];
    int i, j;

    while(1)
    {
        gets(A);
        if(strcmp("DONE", A)==0)
        {
            break;
        }
        else
        {
            int l = strlen(A);
            int j = 0;
            for(i=0;i<l;i++)
            {
                if(A[i]=='\0' || A[i]=='\n')
                {
                    B[j]='\0';
                    break;
                }
                else if((A[i]>64 && A[i]<91) || (A[i]>96 && A[i]<123))
                {
                    B[j]=tolower(A[i]);
                    j++;
                }
            }
            B[j];
            printf("%s\n", B);
            strcpy(C,B);
            printf("%s\n", C);
        }
    }

    return 0;
}
