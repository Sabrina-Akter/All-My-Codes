#include <bits/stdc++.h>

int main()
{
    int t,i,l,n;
    char c[100];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        gets(c);
        l = strlen(c);
        if(l>10)
        {
        n = l-2;
            printf("%c%d%c\n", c[0], n, c[l-1]);
        }
        else
        {
            printf("%s\n", c);
        }
    }
    return 0;
}