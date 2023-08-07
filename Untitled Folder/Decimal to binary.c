#include <stdio.h>

int main()
{
    int decimal,b,i=1,c;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("The converted binary number is: ");
    for(i=1;i<10;i++)
    {
            b = decimal%2;
            printf("%d", b);
            decimal = decimal/2;
            if(decimal == 0)
            break;
    }
    return 0;
}
