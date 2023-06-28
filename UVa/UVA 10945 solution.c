#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char ch[10000], palin[10000];
    int a=0, z, lenth, result, i;
    while(scanf("%c", &ch[0])==1)
    {   result=1;
        lenth=0;
        for(a=1; ; a++)
        {
            scanf("%c", &ch[a]);
            if(ch[a]=='\n')
            {
                ch[a]='';
                break;
            }
        }
        if(!(strcmp(ch, "DONE"))) break;

        for(a=0, i=0; ch[a]!=''; a++)
        {
            ch[a]=toupper(ch[a]);
            if(ch[a]>='A' && ch[a]<='Z')
                {palin[i]=ch[a]; i++; lenth++;}
        }
        palin[i]='';
        lenth=lenth-1;

        for(a=0; a<lenth; a++)
        {
            if(palin[a]!=palin[lenth-a])
                result=0;
        }
        if(result==1) {printf("You won't be eaten!\n");}
        else {printf("Uh oh..\n");}
    }
}
