#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j;
    char c[10001], x[2];
    char a;

    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        gets(x);
        gets(c);
        int flag=0;
        int l = strlen(c);
        scanf("%c", &a);
        for(j=0;j<l;j++)
        {
            if(c[j]==a)
            {
                flag++;
            }
        }
        if(flag!=0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", a, c, flag);
        }
        else
        {
            printf("'%c' is not present\n", a);
        }
    }
    return 0;
}
