main()
{
    double a,b,c;
    double area_of_the_rectangled_triangle, area_of_the_radius_of_the_circle, area_of_the_trapezium, area_of​_the_square, area_of_the_rectangle;

    scanf("%lf %lf %lf\n", &a, &b, &c);

    area_of_the_rectangled_triangle = (1/2)*a*c;
    area_of_the_radius_of_the_circle = 3.14159* pow(c,2);
    area_of_the_trapezium = (1/2)*(a+b)*c;
    area_of​_the_square = pow(b,2);
    area_of_the_rectangle = a*b;

    printf("TRIANGULO: %.3lf\n",area_of_the_rectangled_triangle);
    printf("CIRCULO: %.3lf\n",area_of_the_radius_of_the_circle);
    printf("TRAPEZIO: %.3lf\n",area_of_the_trapezium);
    printf("QUADRADO: %.3lf\n",area_of​_the_square);
    printf("RETANGULO: %.3lf\n",area_of_the_rectangle);


    return 0;
}
