#include <stdio.h>

int main()
{
    int t,i;
    char n[1000001], x[2];
    scanf("%d", &t);
    gets(x);
    for(i=0;i<t;i++)
    {
        gets(n);
        int flag=0;
        int l = strlen(n);
        for(int j=1;j<l;j++)
        {
            if(((n[j]>46 && n[j]<58) || n[j]=='-') && n[j-1]==' ')
            {
                flag++;
            }
        }
        printf("%d\n", flag+1);
    }
    return 0;
}
