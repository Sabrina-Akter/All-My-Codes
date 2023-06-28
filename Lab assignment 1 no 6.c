main()
{
    int x,y,a,b,z,hypotenuse;
    printf("Length of the sides x and y are:");
    scanf("%d %d", &x, &y);
    a=x*x;
    b=y*y;
    z=a+b;
    hypotenuse=sqrt(z);
    printf("Length of the hypotenuse is: %d", hypotenuse);
    return 0;
}
