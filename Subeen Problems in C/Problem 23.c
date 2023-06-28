#include <stdio.h>
#include <string.h>
int main()
{
    char s[101],a,b[300];
    int t,i,l,j,k;
    scanf("%d", &t);
    scanf("%c", &a);
    for(i=0;i<t;i++)
    {
        gets(s);
        l = strlen(s);
        j = 0;
        for(k=0;k<l;k++)
        {
            if(s[k]=='A')
            {
                b[j]='1';
                j++;
            }
            else if(s[k]=='B')
            {
                b[j]='2';
                j++;
            }
            else if(s[k]=='C')
            {
                b[j]='3';
                j++;
            }
            else if(s[k]=='D')
            {
                b[j]='4';
                j++;
            }
            else if(s[k]=='E')
            {
                b[j]='5';
                j++;
            }
            else if(s[k]=='F')
            {
                b[j]='6';
                j++;
            }
            else if(s[k]=='G')
            {
                b[j]='7';
                j++;
            }
            else if(s[k]=='H')
            {
                b[j]='8';
                j++;
            }
            else if(s[k]=='I')
            {
                b[j]='9';
                j++;
            }
            else if(s[k]=='J')
            {
                b[j]='1';
                j++;
                b[j]='0';
                j++;
            }
            else if(s[k]=='K')
            {
                b[j]='1';
                j++;
                b[j]='1';
                j++;
            }
            else if(s[k]=='L')
            {
                b[j]='1';
                j++;
                b[j]='2';
                j++;
            }
            else if(s[k]=='M')
            {
                b[j]='1';
                j++;
                b[j]='3';
                j++;
            }
            else if(s[k]=='N')
            {
                b[j]='1';
                j++;
                b[j]='4';
                j++;
            }
            else if(s[k]=='O')
            {
                b[j]='1';
                j++;
                b[j]='5';
                j++;
            }
            else if(s[k]=='P')
            {
                b[j]='1';
                j++;
                b[j]='6';
                j++;
            }
            else if(s[k]=='Q')
            {
                b[j]='1';
                j++;
                b[j]='7';
                j++;
            }
            else if(s[k]=='R')
            {
                b[j]='1';
                j++;
                b[j]='8';
                j++;
            }
            else if(s[k]=='S')
            {
                b[j]='1';
                j++;
                b[j]='9';
                j++;
            }
            else if(s[k]=='T')
            {
                b[j]='2';
                j++;
                b[j]='0';
                j++;
            }
            else if(s[k]=='U')
            {
                b[j]='2';
                j++;
                b[j]='1';
                j++;
            }
            else if(s[k]=='V')
            {
                b[j]='2';
                j++;
                b[j]='2';
                j++;
            }
            else if(s[k]=='W')
            {
                b[j]='2';
                j++;
                b[j]='3';
                j++;
            }
            else if(s[k]=='X')
            {
                b[j]='2';
                j++;
                b[j]='4';
                j++;
            }
            else if(s[k]=='Y')
            {
                b[j]='2';
                j++;
                b[j]='5';
                j++;
            }
            else if(s[k]=='Z')
            {
                b[j]='2';
                j++;
                b[j]='6';
                j++;
            }
        }
        b[j]='\0';
        printf("%s\n", b);
    }
    return 0;
}
