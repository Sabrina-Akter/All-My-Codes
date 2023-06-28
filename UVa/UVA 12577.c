#include <stdio.h>

int main()
{
    int flag=0;
    char c[10];

   while(scanf("%s", c)==1)
   {
       if(c[0]=='*' && c[1]=='\0')
       {
           break;
       }
       else if(c[0]=='H' && c[1]=='a' && c[2]=='j' && c[3]=='j' && c[4]=='\0')
       {
           flag++;
           printf("Case %d: Hajj-e-Akbar\n", flag);
       }
       else if(c[0]=='U' && c[1]=='m' && c[2]=='r' && c[3]=='a' && c[4]=='h' && c[5]=='\0')
       {
           flag++;
           printf("Case %d: Hajj-e-Asghar\n", flag);
       }
   }

    return 0;
}
