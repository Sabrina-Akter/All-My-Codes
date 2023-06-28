main()
{
    float a,b,c;
    scanf("%f",&a);
    if (a<=400) {
        c=a*.15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",(a+c),c);
    }
    else if (a>=400.01 && a<=800) {
        c=a*.12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",(a+c),c);
    }
    else if (a>=800.01 && a<=1200) {
        c=a*.10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",(a+c),c);
    }
    else if (a>=1200.01 && a<=2000) {
        c=a*.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",(a+c),c);
    }
    else if (a>2000) {
        c=a*.04;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",(a+c),c);
    }
    return 0;
}
