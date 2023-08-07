main ()
{
    int ddd, hh, mm, ss, n;
    printf("Enter the time in seconds: ");
    scanf("%d", &n);
    ddd = n/86400;
    hh = (n%86400)/3600;
    mm = ((n%86400)%3600)/60;
    ss = ((n%86400)%3600)%60;
    printf("Time in ''ddd:hh:mm:ss'' is: %d:%d:%d:%d", ddd, hh, mm, ss);
    return 0;
}
