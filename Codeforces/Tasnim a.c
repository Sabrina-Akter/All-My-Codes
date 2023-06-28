#include <stdio.h>
int main()
{
    int i;
    char ar[100];
    char c, d, e;
    gets(ar);
    scanf("%c", &c);
    for(i=0;i<strlen(ar);i++)
    {
        if(ar[i]==c)
        {
            printf("%d", i+1);
            break;
        }
    }
}
