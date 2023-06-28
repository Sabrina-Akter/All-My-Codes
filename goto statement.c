#include<stdio.h>

int main()
{
    int i=0;
    NUMBER:
        printf("%d ", i);
    i++;
    if(i<5)
    {
        goto NUMBER;
    }
    return 0;
}
