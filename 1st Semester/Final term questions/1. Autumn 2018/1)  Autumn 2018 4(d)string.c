#include<stdio.h>
#include<string.h>

int number_of_letter_A(char name[20])
{
    int i, sum = 0;
    for(i=0;i<20;i++)
    {
        if(name[i]=='A')
        {
            sum = sum + 1;
        }
    }
    return sum;
}

int main()
{
    char name1[20];
    gets(name1);
    printf("The number of occurrences of letter A is %d", number_of_letter_A(name1));
    return 0;
}
