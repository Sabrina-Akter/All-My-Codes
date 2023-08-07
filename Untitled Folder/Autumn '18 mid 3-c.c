#include<stdio.h>
main()
{
    char ch;
    scanf("%c",&ch);
    /*if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The given character input is a vowel.");
    }
    else {
        printf("The given character input is a consonant.");
    }*/

    /*switch(ch) {
    case 'a':
    printf("The given character input is a vowel.");
    break;
    case 'e':
    printf("The given character input is a vowel.");
    break;
    case 'i':
    printf("The given character input is a vowel.");
    break;
    case 'o':
    printf("The given character input is a vowel.");
    break;
    case 'u':
    printf("The given character input is a vowel.");
    break;
    case 'A':
    printf("The given character input is a vowel.");
    break;
    case 'E':
    printf("The given character input is a vowel.");
    break;
    case 'I':
    printf("The given character input is a vowel.");
    break;
    case 'O':
    printf("The given character input is a vowel.");
    break;
    case 'U':
    printf("The given character input is a vowel.");
    break;
    default:
    printf("The given character input is a consonant.");
    break;
    }*/

    switch(ch) {
    case 'a' || 'e' || 'i' || 'o' || 'u':
    printf("The given character input is a vowel.");
    break;
    }
    return 0;
}
