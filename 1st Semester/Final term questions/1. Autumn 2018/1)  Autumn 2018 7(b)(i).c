#include <stdio.h>

int main()
{
    int *p, x[5]={11,21,31,41,51};

    for(p=x;p<x+5;p++)
    {
        printf("%d ", ++(*p));
    }
    return 0;
}
