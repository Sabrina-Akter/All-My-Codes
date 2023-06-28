#include <stdio.h>
#include <stdlib.h>

int a=0, b=1;
int funct2(int a)
{
    return (b+a);
}
int funct1(int a)
{
    b = funct2(a+1)+1;
    return (b);
}

int main()
{
    int c;
    for(c=1;c<=5;++c)
    {
        b+=funct1(a+1)+1;
        printf("%d\n", b);
    }
    return 0;
}
