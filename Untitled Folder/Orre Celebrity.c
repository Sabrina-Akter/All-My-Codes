#include <stdio.h>
#include <string.h>

int main()
{
    char A;

    while(scanf("%c", &A)==1)
    {
        if(A=='\n')
        {
            printf("\n");
        }
        else
        {
            printf("%c", A);
        }
    }
	return 0;
}
