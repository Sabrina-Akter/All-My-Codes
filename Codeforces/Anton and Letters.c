#include <stdio.h>
#include <string.h>

int main()
{
    char A[2000];
    char B[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    gets(A);

    int l = strlen(A);
    int i,j,k=0;

    for(i=0;i<26;i++)
    {
        for(j=0;j<l;j++)
        {
            if(B[i]==A[j])
            {
                k++;
                break;
            }
        }
    }

    printf("%d\n", k);

    return 0;
}
