#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000], t[100000];
    while(gets(s))
    {
      int i,f=0,l = strlen(s);
      for(i=0;i<l;i++)
      {
          if(s[i]==' ')
          {
              t[i]=s[i];
          }
          else if(((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123)) && f==0)
          {
              t[i]=toupper(s[i]);
              f = 1;
          }
          else if(((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123)) && f==1)
          {
              t[i]=tolower(s[i]);
              f = 0;
          }
          else
          {
              t[i]=s[i];
          }
      }
      t[i]='\0';
      printf("%s\n",t);
    }
    return 0;
}
