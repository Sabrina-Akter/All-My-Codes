#include <stdio.h>
#include <string.h>

int main()
{
    char direction[4][4];

    strcpy((direction[0]),"North");
    strcpy((direction[1]),"South");
    strcpy((direction[2]),"East");
    strcpy((direction[3]),"West");

    printf("%s\n", (direction[0]));
    printf("%s\n", (direction[1]));
    printf("%s\n", (direction[2]));
    printf("%s\n", (direction[3]));

    return 0;
}
