#include <stdio.h>
#include <string.h>

int main()
{
    while(1)
    {
        char a[2],b[200],c[200];
        int i;
        scanf("%s%s", &a, &b);
        if(a[0]=='0' && a[1]=='\0' && b[0]=='0' && b[1]=='\0')
        {
            break;
        }
        int l = strlen(b);
        int n = 0;
        for(i=0;i<l;i++)
        {
            if(a[0]!=b[i])
            {
                c[n]=b[i];
                n++;
            }
        }
        c[n]='\0';
        int x = 0;
        for(i=0;i<n;i++)
        {
            if(c[i]=='0')
            {
                x++;
            }
        }
        int m=0, f=0;
        char d[200];
        for(i=0;i<n;i++)
        {
            if((c[i-1]=='0' && c[i]!='0') || (c[i]!='0'))
            {
                f=1;
            }
            if(f==1)
            {
                d[m]=c[i];
                m++;
            }
        }
        d[m]='\0';
        if(x==(n))
        {
            printf("0\n");
        }
        else
        {
            printf("%s\n", d);
        }
    }
    return 0;
}
