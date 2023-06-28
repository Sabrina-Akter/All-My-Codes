#include <stdio.h>

int cse()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    printf("%d ", cse());
    printf("%d ", cse());
    printf("%d ", cse());

    return 0;
}
