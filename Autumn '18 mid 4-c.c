#include<stdio.h>
main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    /* a=10 b=15
       a=-5 b=10
       a=15
    */
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%d %d", a, b);
    return 0;
}
