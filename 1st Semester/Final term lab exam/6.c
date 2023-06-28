#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;

    printf("Enter any alphabet, digit or symbol: ");
    scanf("%c", &c);

    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("\nThis is an alphabet.\n");
    }
    else if(c>='0' && c<='9')
    {
        printf("\nThis is a digit.\n");
    }
     else
    {
        printf("\nThis is a symbol.\n");
    }
    return 0;
}
