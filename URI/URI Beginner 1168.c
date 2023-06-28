#include<stdio.h>
int main()
{
    int sum, i, n, j;
    char v[10000];

    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        sum = 0;
        scanf("%s", v);

        for(j=0;j<10000;j++)
        {
        if(v[j]=='0')
        {
            sum = sum + 6;
        }
        else if(v[j]=='1')
        {
            sum = sum + 2;
        }
        else if(v[j]=='2')
        {
            sum = sum + 5;
        }
        else if(v[j]=='3')
        {
            sum = sum + 5;
        }
        else if(v[j]=='4')
        {
            sum = sum + 4;
        }
        else if(v[j]=='5')
        {
            sum = sum + 5;
        }
        else if(v[j]=='6')
        {
            sum = sum + 6;
        }
        else if(v[j]=='7')
        {
            sum = sum + 3;
        }
        else if(v[j]=='8')
        {
            sum = sum + 7;
        }
        else if(v[j]=='9')
        {
            sum = sum + 6;
        }
        else if(v[j]=='\0')
            break;
        }

        printf("%d leds\n", sum);

    }

    return 0;
}
