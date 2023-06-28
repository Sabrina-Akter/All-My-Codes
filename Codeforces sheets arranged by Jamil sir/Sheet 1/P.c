#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    scanf("%c", &c);

    if(c>64 && c<91)
    {
        printf("%c\n", tolower(c));
    }
    else if(c>96 && c<123)
    {
        printf("%c\n", toupper(c));
    }

    return 0;
}
