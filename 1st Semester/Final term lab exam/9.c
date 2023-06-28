#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[5];
    int i, n;

    printf("Enter the word: ");
    for(i=0;i<5;i++)
    {
        scanf("%c", &c[i]);
        n = c[i] - 30;
        c[i] = n;
    }
    printf("\n");
    printf("After subtracting 30, the word is now: ");
    for(i=0;i<5;i++)
    {
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}
