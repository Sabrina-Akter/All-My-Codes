#include <stdio.h>
#include <stdlib.h>

int factor(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else
    {
        return x*factor(x-1);
    }
}

int main()
{
    int n=5;
    printf("The factorial of 5 is %d.", factor(n));
    return 0;
}
