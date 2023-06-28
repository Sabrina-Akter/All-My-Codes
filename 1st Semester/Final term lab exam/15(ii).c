#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,length, count;
    char a[] = "oooo", b[30],c[30];

    length = sizeof(a);
    c[length] = a;

    printf("%s\n", a);
    b[length] = strcpy(b,strrev(a));
    printf("%s\n", b);

    for(i=0;i<length;i++)
    {
        if(c[i]==b[i])
        {
            count++;
        }
        else
        {
            count=0;
            break;
        }
    }

    if(count==0)
    {
        printf("\nThe word is not a palindrome.\n");
    }
    else
    {
        printf("\nThe word is a palindrome.\n");
    }
    return 0;
}
