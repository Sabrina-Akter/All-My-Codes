#include <stdio.h>

int main()
{
    char name[30];
    scanf("%s", name);

    strcpy(name, "Bacon");
    printf("My name is %s.\n", name);
    return 0;
}

