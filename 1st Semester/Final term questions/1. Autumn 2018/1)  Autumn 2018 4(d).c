#include<stdio.h>
#include<string.h>

int main()
{
    char i, sum = 0, name[20];
    scanf("%s", &name);
    for(i=0;i<20;i++)
    {
        if(name[i]=='a')
        {
            sum = sum + 1;
        }
    }
    printf("The number of occurrence of the letter a is %d", sum);
    return 0;
}
