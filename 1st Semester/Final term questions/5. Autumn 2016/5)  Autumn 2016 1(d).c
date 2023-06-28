#include<stdio.h>
#include<string.h>

int main()
{
    int i, length, x, sum=0;
    char num[10];
    printf("Enter the number: ");
    scanf("%s", num);
    printf("The number is %s\n", num);

    length = strlen(num);

    for(i=0;i<length;i++)
    {
        if(num[i]=='0')
        {
            x=0;
        }
        if(num[i]=='1')
        {
            x=1;
        }
        if(num[i]=='2')
        {
            x=2;
        }
        if(num[i]=='3')
        {
            x=3;
        }
        if(num[i]=='4')
        {
            x=4;
        }
        if(num[i]=='5')
        {
            x=5;
        }
        if(num[i]=='6')
        {
            x=6;
        }
        if(num[i]=='7')
        {
            x=7;
        }
        if(num[i]=='8')
        {
            x=8;
        }
        if(num[i]=='9')
        {
            x=9;
        }
        sum = sum + x;
    }
    printf("\nThe sum is %d", sum);
    return 0;
}
