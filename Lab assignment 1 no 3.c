main ()
{
    float Fahrenheit, Celsius, x, y, z;
    printf("Input degree in Fahrenheit:");
    scanf("%f", &Fahrenheit);

    x=5;
    y=9;
    z=x/y;
    Celsius= z*(Fahrenheit-32);
    printf("Degree in Fahrenheit to Celsius: %f", Celsius);
    return 0;


}
