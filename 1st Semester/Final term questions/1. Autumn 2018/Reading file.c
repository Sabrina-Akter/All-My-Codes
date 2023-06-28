#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPointer;
    fPointer = fopen("Hello.txt","w");

    fprintf(fPointer, "Hello World\n");

    fclose(fPointer);

    return 0;
}
