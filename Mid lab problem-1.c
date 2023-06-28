#include <stdio.h>

int main()
{
    int n;
    printf("Enter any positive integer: ");
    scanf("%d", &n);
    if(n%5==0 && n%11==0)
    {
        printf("\nThe given number is divisible by 5 and 11.\n");
    }
    else
    {
        printf("\nThe given number is not divisible by 5 and 11.\n");
    }
    return 0;
}
