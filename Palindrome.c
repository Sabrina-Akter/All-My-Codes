#include<stdio.h>
#include<string.h>

int main()
{
    int count, i;
    char a[30];
    char b[30];
    char c[30];
    scanf("%s", &a);
    strcpy(b,a);
    strcpy(c,b);
    strrev(c);

    for(i=0;i<strlen(a);i++)
    {
            if(a[i]==c[i])
            {
                count = 0;
            }
            else
            {
                count = 1;
                break;
            }
    }
    if(count==0)
    {
        printf("This is a palindrome.");
    }
    else if(count==1)
    {
        printf("This is not a palindrome.");
    }
    return 0;
}
