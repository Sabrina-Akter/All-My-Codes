#include <stdio.h>
int main()
{
    int a, b, i, sum=0;
    scanf("%d", &a);
    for(i=0;i<5;i++)
    {
        b = a%10;
        sum = sum + b;
        a = a/10;
    }
    printf("%d\n", sum);
    return 0;
}
