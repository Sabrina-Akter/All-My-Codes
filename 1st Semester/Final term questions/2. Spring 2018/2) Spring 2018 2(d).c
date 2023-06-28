#include <stdio.h>
#include <stdlib.h>

int add(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a + add(a-1);
    }
}

int main()
{
    int n = 4;
    printf("%d", add(4));
    return 0;
}
