#include<stdio.h>

main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a=%d and b=%d", a, b);
    return 0;
}
