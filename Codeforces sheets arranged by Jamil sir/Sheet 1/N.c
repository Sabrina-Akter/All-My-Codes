#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[100],d[100];
    scanf("%s%s%s%s", a,b,c,d);

    if(strcmp(b,d)==0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }

    return 0;
}
