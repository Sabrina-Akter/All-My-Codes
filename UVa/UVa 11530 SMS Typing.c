#include<stdio.h>

int main()
{
    int i, j, k=1, n, sum=0, l;
    char c[101];
    char y;
    scanf("%d%c", &n, &y);
    for(j=0;j<n;j++)
    {
    gets(c);
    l = strlen(c);
    for(i=0;i<l;i++)
    {
            if(c[i]=='a'||c[i]=='g'||c[i]=='j'||c[i]=='m'||c[i]=='p'||c[i]=='t'||c[i]=='w'||c[i]=='d'||c[i]==' ')
            {
                sum = sum + 1;
            }
            else if(c[i]=='b'||c[i]=='e'||c[i]=='h'||c[i]=='k'||c[i]=='n'||c[i]=='q'||c[i]=='u'||c[i]=='x')
            {
                sum = sum + 2;
            }
                else if(c[i]=='c'||c[i]=='f'||c[i]=='i'||c[i]=='l'||c[i]=='o'||c[i]=='r'||c[i]=='v'||c[i]=='y')
            {
                sum = sum + 3;
            }
                else if(c[i]=='s'||c[i]=='z')
            {
                sum = sum + 4;
            }
    }
    printf("Case #%d: %d\n", k, sum);
    sum = 0;
    k++;
    }
    return 0;
}
