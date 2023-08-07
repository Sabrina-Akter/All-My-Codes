main()
{
    int s,a,b,c,area;

    printf("Enter the values of a, b, c\n");
    scanf("%d %d %d", &a, &b, &c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle = %d\n", area);
    return 0;
}
