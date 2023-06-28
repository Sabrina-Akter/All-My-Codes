#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,eq1,eq2,a,b,x1,x2,y1,y2,c,d;

    eq1= 15;
    eq2= 5;
    x1 =1;
    x2=1;
    y1=1;
    y2= -1;

    a = eq1 + eq2;
    b = eq1 - eq2;
    c = x1+y1+x2+y2;
    d = x1+y1-x1-y2;
    x = a/c;
    y = b/d;
    printf("x = %d", x);
    printf("\ny = %d", y);

    return 0;
}
