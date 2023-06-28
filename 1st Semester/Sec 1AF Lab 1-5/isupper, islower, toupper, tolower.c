#include<stdio.h>

int main()
{
    int length,i;
    char letters[20];
    scanf("%s", &letters);
    length=strlen(letters);
    printf("%d\n", length);
    for(i=0;i<=length;i++)
    {
        if(isupper(letters[i]))
        {
            printf("%c",tolower(letters[i]));
        }
        else if(islower(letters[i]))
        {
            printf("%c",toupper(letters[i]));
        }
    }

    return 0;
}

