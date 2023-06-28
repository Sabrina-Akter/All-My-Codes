main()
{
    double a,b,c;
    double rectangled_triangle, radius_of_the_circle, trapezium, square, rectangle;

    scanf("%lf %lf %lf\n", &a, &b, &c);

    rectangled_triangle = .5*a*c;
    radius_of_the_circle = 3.14159* pow(c,2);
    trapezium = (.5*(a+b))*c;
    square = pow(b,2);
    rectangle = a*b;

    printf("TRIANGULO: %.3lf\n",rectangled_triangle);
    printf("CIRCULO: %.3lf\n",radius_of_the_circle);
    printf("TRAPEZIO: %.3lf\n",trapezium);
    printf("QUADRADO: %.3lf\n",square);
    printf("RETANGULO: %.3lf\n",rectangle);


    return 0;
}
