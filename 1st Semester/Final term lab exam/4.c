#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Enter the letter: ");
    scanf("%c", &c);

    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("\nThe letter is a vowel.\n");
    }
    else
    {
        printf("\nThe letter is a consonant.\n");
    }

    return 0;
}
