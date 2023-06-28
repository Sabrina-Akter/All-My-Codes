#include <stdio.h>

int main()
{
    char A[100];

    scanf("%[^\n]%*c", &A);

    printf("Hello, World!\n");
    printf("%s\n", A);

    return 0;
}
