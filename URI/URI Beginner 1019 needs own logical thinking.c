main()
{
    int a, hours, hrem, minutes, seconds;
    scanf("%d\n", &a);
    hours = a/3600;
    hrem = a%3600;
    minutes = hrem/60;
    seconds =  hrem%60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}
