#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if(c>64 && c<91)
    {
        printf("IS CAPITAL\n");
    }
    else if(c>96 && c<123)
    {
        printf("IS SMALL\n");
    }

    return 0;
}
