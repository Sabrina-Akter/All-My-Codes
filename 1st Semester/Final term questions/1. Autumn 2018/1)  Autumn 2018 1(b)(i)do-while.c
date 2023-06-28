#include <stdio.h>

int main()
{
    int i=0, n=10;
    do
    {
        printf("I like for loop.\n");
        printf("%d\n", i);
        printf("I also like do..while loop.\n");
        i++;
    }
    while(i<n);
    return 0;
}
