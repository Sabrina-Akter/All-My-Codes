#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, length, count = 0;
    char c[30];
    printf("Enter a word: ");
    scanf("%s", c);
    length = sizeof(c);

    if(length%2==0)
    {
        for(i=0;i<=((length/2)-1);i++)
            if(c[i]==c[length-1])
            {
                count++;
            }
    }
    else if(length%2!=0)
    {
        for(i=0;i<=(length/2);i++)
            if(c[i]==c[length-1])
            {
                count++;
            }
    }


    if(count!=0)
    {
        printf("\n\nThe word is a palindrome.\n");
    }
    else
    {
        printf("\n\nThe word is not a palindrome.\n");
    }

    return 0;
}
