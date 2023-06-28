#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, h3, m3;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);

    if(h2>h1)
    {
        h3 = h2 - h1;
        if(m1>m2)
        {
            h3 = h3-1;
            m3 = 60 - m1 + m2;
        }
        else if(m2>m1)
        {
            m3 = m2 - m1;
        }
        else if(m1==m2)
        {
            m3 = 0;
        }
    }
    else if(h1>h2)
    {
        h3 = 24 - h1 + h2;
        if(m1>m2)
        {
            h3 = h3 - 1;
            m3 = 60 - m1 + m2;
        }
        else if(m2>m1)
        {
            m3 = m2 - m1;
        }
        else if(m1==m2)
        {
            m3 = 0;
        }
    }
    else if(h1==h2)
    {
        h3 = 24;
        if(m1>m2)
        {
            h3 = h3 - 1;
            m3 = 60 - m1 + m2;
        }
        else if(m2>m1)
        {
            m3 = m2 - m1;
        }
        else if(m1==m2)
        {
            m3 = 0;
        }
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h3, m3);
    return 0;
}

