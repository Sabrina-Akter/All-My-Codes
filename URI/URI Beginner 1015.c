main()
{
    double x1, x2, y1, y2, x, y, d, a, b, z;
    scanf("%lf %lf %lf %lf\n", &x1, &x2, &y1, &y2);
    a = (x2 - x1);
    x = pow(a,2);
    b = (y2 - y1);
    y = pow(b,2);
    z= x+y;
    d = sqrt(z);
    printf("%.4lf\n", d);

    return 0;

}
