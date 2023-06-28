#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any letter: ");
    scanf("\n%c", &ch);

    if(isupper(ch)==1){
        printf("The lowercase of the letter is %c.", tolower(ch));
    }
    else{
        printf("The uppercase of the letter is %c.", toupper(ch));
    }
    return 0;
}
