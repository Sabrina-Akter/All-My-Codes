#include <stdio.h>
#include <string.h>

int main()
{
    char c[20];
    scanf("%s", c);
    int i, f=0, l = strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]=='4' || c[i]=='7')
        {
            f++;
        }
    }
    if(f==4 || f==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
