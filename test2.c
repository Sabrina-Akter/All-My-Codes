#include <stdio.h>

int main()
{
    char A;
    char B;

    scanf("%c", &A);

    tolower(A);

    //strcpy(B,A);
    //strrev(B);

    printf("A = %c\n", A);
    //printf("B = %c\n", B);
    printf("A = %c\n", tolower(A));

    return 0;
}
