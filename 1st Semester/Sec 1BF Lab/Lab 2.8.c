#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any letter: ");
    scanf("\n%c", &ch);
    ch = tolower(ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("\nThe given letter is a vowel.");
    }
    else{
        printf("\nThe given letter is a consonant.");
    }
    return 0;
}


