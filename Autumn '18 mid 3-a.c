main ()
{
    int x, y;
    y = 1;
    scanf("%d", &x);
    if (x >= 0)
        if (x>0) {
            printf("%d",(y = x+1));
        }
    else {
        printf("%d",(y = x-1));
    }
    return 0;

}
