#include <stdio.h>

int main()
{
    int Do_you_like_me;

    printf("I like you.\nDo you like me?\n");
    //Enter 1 or 0
    scanf("%d", &Do_you_like_me);

    if(Do_you_like_me == 1)
    {
        printf("Aww! :D Cholo date e jai.");
    }
    else
    {
        printf(":'( </3");
    }
}
