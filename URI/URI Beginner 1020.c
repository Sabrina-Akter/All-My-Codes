main()
{
    int a, years, yrem, months, days;
    scanf("%d\n", &a);
    years = a/365;
    yrem = a%365;
    months = yrem/30;
    days =  yrem%30;

    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);

    return 0;

}
