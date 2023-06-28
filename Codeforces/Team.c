#include<stdio.h>

int main()
{
    int n, a, b, c, i, sum = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(a==0 || a==1 || b==0 || b==1 || c==0 || c==1)
        {
        if(a==1 && b==1 && c==1)
        {
            sum++;
        }
        else if(a==1 && b==1 && c==0)
        {
            sum++;
        }
        else if(a==1 && b==0 && c==1)
        {
            sum++;
        }
        else if(a==0 && b==1 && c==1)
        {
            sum++;
        }
        }
    }
    if((a==0 || a==1) && (b==0 || b==1) && (c==0 || c==1))
    {
        printf("%d\n", sum);
    }

    return 0;
}
