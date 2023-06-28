#include <stdio.h>

int main()
{
    int t,i,first,last;
    char n[6],x[2];

    scanf("%d", &t);
    gets(x);
    for(i=0;i<t;i++)
    {
        gets(n);
        if(n[0]=='0')
        {
            first = 0;
        }
        else if(n[0]=='1')
        {
            first = 1;
        }
        else if(n[0]=='2')
        {
            first = 2;
        }
        else if(n[0]=='3')
        {
            first = 3;
        }
        else if(n[0]=='4')
        {
            first = 4;
        }
        else if(n[0]=='5')
        {
            first = 5;
        }
        else if(n[0]=='6')
        {
            first = 6;
        }
        else if(n[0]=='7')
        {
            first = 7;
        }
        else if(n[0]=='8')
        {
            first = 8;
        }
        else if(n[0]=='9')
        {
            first = 9;
        }
        if(n[4]=='0')
        {
            last = 0;
        }
        else if(n[4]=='1')
        {
            last = 1;
        }
        else if(n[4]=='2')
        {
            last = 2;
        }
        else if(n[4]=='3')
        {
            last = 3;
        }
        else if(n[4]=='4')
        {
            last = 4;
        }
        else if(n[4]=='5')
        {
            last = 5;
        }
        else if(n[4]=='6')
        {
            last = 6;
        }
        else if(n[4]=='7')
        {
            last = 7;
        }
        else if(n[4]=='8')
        {
            last = 8;
        }
        else if(n[4]=='9')
        {
            last = 9;
        }
        printf("Sum = %d\n", first+last);
    }
    return 0;
}
