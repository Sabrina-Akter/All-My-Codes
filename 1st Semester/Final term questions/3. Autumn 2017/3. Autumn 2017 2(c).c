#include <stdio.h>

int R(int n)
{
    if(n>0)
    {
        return (n+R(n-1));
    }
}


int main()
{

    int n =10;
    printf("%d", R(n));

    return 0;
}
