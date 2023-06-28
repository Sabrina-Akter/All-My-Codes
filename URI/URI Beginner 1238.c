#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0,la,lb,x;
    char a[50], b[50], d[50], c[100];

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%s%s", a, b);
        la = strlen(a);
        lb = strlen(b);
        if(la>=lb)
        {
            d[50] = a[50];
            strcpy(c,d);
            for(i=0;i<(lb*2);i++)
            {
                c[k]=a[i];
                k++;
                c[k]=b[i];
                k++;
            }
        }
        else if(lb>la)
        {
            d[50] = b[50];
            strcpy(c,d);
            for(i=0;i<(la*2);i++)
            {
                c[k]=a[i];
                k++;
                c[k]=b[i];
                k++;
            }
        }

    printf("%s\n", c);
    }
    return 0;
}
