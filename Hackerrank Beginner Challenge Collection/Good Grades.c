#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n>=0 && n<=59)
    {
        printf("F\n");
    }
    else if(n>=60 && n<=69)
    {
        printf("D\n");
    }
    else if(n>=70 && n<=79)
    {
        printf("C\n");
    }
    else if(n>=80 && n<=89)
    {
        printf("B\n");
    }
    else if(n>=90 && n<=100)
    {
        printf("A\n");
    }
    return 0;
}
