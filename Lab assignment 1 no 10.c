#include <stdio.h>
#include <limits.h>
main()
{
    printf("size of integer: %d\n", sizeof(int));
    printf("size of character: %d\n", sizeof(char));
    printf("size of float: %d\n", sizeof(float));
    printf("size of double: %d\n", sizeof(double));
    printf("size of int max: %d\n", INT_MAX);
    printf("size of int min: %d\n", INT_MIN);
    printf("size of char max: %d\n", CHAR_MAX );
    printf("size of char min: %d\n", CHAR_MIN);

    return 0;
}
