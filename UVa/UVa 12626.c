#include <stdio.h>
#include <string.h>

int main()
{
    int M=0, A=0, R=0, G=0, I=0, T=0, P=0, i, t,j;
    char Ar[600];

    scanf("%d", &t);

    for(j=0;j<t;j++)
    {
    scanf("%s", Ar);

    int l = strlen(Ar);

    for(i=0;i<l;i++)
    {
        if(Ar[i]=='M')
        {
            M++;
        }
        else if(Ar[i]=='A')
        {
            A++;
        }
        else if(Ar[i]=='R')
        {
            R++;
        }
        else if(Ar[i]=='G')
        {
            G++;
        }
        else if(Ar[i]=='I')
        {
            I++;
        }
        else if(Ar[i]=='T')
        {
            T++;
        }
    }


    while(1)
    {
        if((M>=1) && (A>=3) && (R>=2) && (G>=1) && (I>=1) && (T>=1))
        {
            P++;
            M = M - 1;
            A = A - 3;
            R = R - 2;
            G = G - 1;
            I = I - 1;
            T = T - 1;
        }
        else
        {
            printf("%d\n", P);
            P = 0, M = 0, A = 0, R = 0, G = 0, I = 0, T = 0;
            break;
        }
    }
    }

    return 0;
}
