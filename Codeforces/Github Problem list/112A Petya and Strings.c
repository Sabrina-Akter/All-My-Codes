#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[200], c[200], d[200];
    gets(a);
    gets(b);
    int i, l = strlen(a);
    for(i=0;i<l;i++)
    {
        c[i]=tolower(a[i]);
        d[i]=tolower(b[i]);
    }
    c[l]='\0';
    d[l]='\0';
    printf("%d\n", strcmp(c,d));
    return 0;
}
