#include <stdio.h>

int main()
{
    int h1, h2, m1, m2, h, m, t, n;

    while(scanf("%d%d%d%d", &h1, &m1, &h2, &m2)==4)
    {
    if(h1==0 && h2==0 && m1==0 && m2==0)
    {
        break;
    }
    if(h1<=23 && h2<=23 && m1<=59 && m2<=59)
    {
            if(h2>h1)
    {
        h = h2 - h1;
        if(m2>m1)
        {
            m = (m2 - m1);
        }
        else if(m1>m2)
        {
            m = (60-m1) + m2;
        }
        else if(m1==m2)
        {
            m = 0;
        }
    }
    else if(h1>h2 || h2==0)
    {
        if(m2>m1)
        {
            h = (24-h1) + h2;
            m = (m2 - m1);
        }
        else if(m1>m2)
        {
            h = h = (24-h1) + h2 -1;
            m = (60-m1) + m2;
        }
        else if(m1==m2)
        {
            h = (24-h1) + h2;
            m = 0;
        }
    }
    else if(h1==h2)
    {
        if(m2>m1)
        {
            h = 0;
            m = (m2 - m1);
        }
        else if(m1>m2)
        {
            h = 23;
            m = (60-m1) + m2;
        }
        else if(m1==m2)
        {
            h = 0;
            m = 0;
        }
    }

    t = (h*60) + m;
    printf("%d\n", t);
    }
    }

    return 0;
}
