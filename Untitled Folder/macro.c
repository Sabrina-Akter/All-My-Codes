#include <stdio.h>
#define MAX(x,y) x>y?x:y

int main()
{
    int a=5, b=10, x=2, y=1;
    printf("The bigger number is %d.\n", MAX(a,b));
    printf("The bigger number is %d.", MAX(x,y));
    return 0;
}
