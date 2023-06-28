/*
#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("This is a vowel.");
    }
    else{
        printf("This is a consonant.");
    }
    return 0;
}
*/
#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    switch(ch){
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("This is a vowel.");
    break;
    default:
        printf("This is a consonant.");
    break;
    }
    return 0;
}
