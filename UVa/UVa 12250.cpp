#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    char s[20];
    while(scanf("%[^\n]%*c", s)==1)
    {
        n++;
        if(strcmp(s, "HELLO")==0)
        {
            printf("Case %d: ENGLISH\n", n);
        }
        else if(strcmp(s, "HOLA")==0)
        {
            printf("Case %d: SPANISH\n", n);
        }
        else if(strcmp(s, "HALLO")==0)
        {
            printf("Case %d: GERMAN\n", n);
        }
        else if(strcmp(s, "BONJOUR")==0)
        {
            printf("Case %d: FRENCH\n", n);
        }
        else if(strcmp(s, "CIAO")==0)
        {
            printf("Case %d: ITALIAN\n", n);
        }
        else if(strcmp(s, "ZDRAVSTVUJTE")==0)
        {
            printf("Case %d: RUSSIAN\n", n);
        }
        else if(strcmp(s, "#")==0)
        {
            break;
        }
        else
        {
            printf("Case %d: UNKNOWN\n", n);
        }
    }
    return 0;
}
