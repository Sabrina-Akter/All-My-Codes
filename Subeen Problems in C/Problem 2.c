#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,j,l,flag=0;
    char n[101], x[1];

    scanf("%d", &t);
    gets(x);

    for(i=0;i<t;i++)
    {
        gets(n);
        l = strlen(n);
        flag = 0;
        if((n[l-1]=='0') || (n[l-1]=='2') || (n[l-1]=='4') || (n[l-1]=='6') || (n[l-1]=='8'))
        {
            flag=1;
        }
        if(flag==1)
        {
            printf("even\n");
        }
        if(flag==0)
        {
            printf("odd\n");
        }
    }
    return 0;
}
