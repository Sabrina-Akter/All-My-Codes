#include <stdio.h>

int main()
{
    double a,b,c,d,e,f,av,new_av;

    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    av = ((a*2.0)+(b*3.0)+(c*4.0)+(d*1.0))/10.0;
    printf("Media: %.1lf\n", av);

    if(av>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(av<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(av>=5.0 && av<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &new_av);
        printf("Nota do exame: %.1lf\n", new_av);
        printf("Aluno aprovado.\n");
        f = (av+new_av)/2.0;
        printf("Media final: %.1lf\n", f);
    }

    return 0;
}
