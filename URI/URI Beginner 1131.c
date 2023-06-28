#include <stdio.h>

int main()
{
    int a,b,n,inter=0,gremio=0,draw=0,total=0;
    while(scanf("%d%d", &a, &b)==2)
    {
        total++;
        if(a>b)
        {
            inter++;
        }
        else if(b>a)
        {
            gremio++;
        }
        else if(a==b)
        {
            draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &n);
        if(n==2)
        {
            printf("%d grenais\n", total);
            printf("Inter:%d\n", inter);
            printf("Gremio:%d\n", gremio);
            printf("Empates:%d\n", draw);
            if(inter>gremio)
            {
                printf("Inter venceu mais\n");
            }
            else if(inter<gremio)
            {
                printf("Gremio venceu mais\n");
            }
            else if(inter==gremio)
            {
                printf("Nao houve vencedor\n");
            }
            break;
        }
    }

    return 0;
}
