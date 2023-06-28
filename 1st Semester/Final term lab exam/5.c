#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Enter the letter: ");
    scanf("%c", &c);

    if(isupper(c))
    {
        printf("\nThe letter is an uppercase letter.\n");
    }
    else
    {
        printf("\nThe letter is a lowercase letter.\n");
    }

    return 0;
}
