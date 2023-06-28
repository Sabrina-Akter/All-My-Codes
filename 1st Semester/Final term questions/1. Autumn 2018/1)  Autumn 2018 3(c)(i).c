#include<stdio.h>

int sum(int n)
{
    if(n<1)
        return n;
    else
        return n + sum(n-1);
}

int main()
{
    printf("%d", sum(6));
    return 0;
}
