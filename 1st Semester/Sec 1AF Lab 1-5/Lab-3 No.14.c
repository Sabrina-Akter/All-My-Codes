#include<stdio.h>

int fibo(int n);
int main()
{
    int x = fibo(5);
    printf("%d", x);
    return 0;
}
int fibo(int n)
{
    if(n==1)
        return 0;
    else
        return 1;
}
