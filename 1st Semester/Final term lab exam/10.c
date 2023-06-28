#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[10];
    int i, length;

    printf("Enter the line of text: ");
    scanf("%s", c);

    length = sizeof(c);
    printf("The reversed text is: ");
    for(i=0;i<length;i++)
    {
        if(isupper(c[i]))
        {
            printf("%c", tolower(c[i]));
        }
        else if(islower(c[i]))
        {
            printf("%c", toupper(c[i]));
        }
    }

    printf("\n");

    return 0;
}
