#include <stdio.h>

int main()
{
    int a,b,t;
    scanf("%d%d", &a, &b);
    if(b>a)
    {
        t = b-a;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    else
    {
        t = (24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    return 0;
}
