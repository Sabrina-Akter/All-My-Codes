#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length, i, j, sum=0;
    char num[100];
    printf("Enter any number: ");
    scanf("%s", num);
    printf("The given number is: %s", num);
    length = strlen(num);
    printf("\nThe length of the number is: %d", length);
    for(i=0;i<length;i++)
    {
        if(num[i]=='0')
            {j = 0;}
        else if(num[i]=='1')
            {j = 1;}
        else if(num[i]=='2')
            {j = 2;}
        else if(num[i]=='3')
            {j = 3;}
        else if(num[i]=='4')
            {j = 4;}
        else if(num[i]=='5')
            {j = 5;}
        else if(num[i]=='6')
            {j = 6;}
        else if(num[i]=='7')
            {j = 7;}
        else if(num[i]=='8')
            {j = 8;}
        else if(num[i]=='9')
            {j = 9;}
        sum = sum + j;
    }
    printf("\n\nThe sum of the digits is: %d", sum);
    return 0;
}
