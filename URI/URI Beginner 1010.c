main()
{
    int a1,a2,b1,b2;
    float a3,b3,a4,b4,c;

    scanf("%d %d %f\n", &a1, &a2, &a3);
    scanf("%d %d %f\n", &b1, &b2, &b3);

    a4 = a2 * a3;
    b4 = b2 * b3;
    c = a4 + b4;

    printf("VALOR A PAGAR: R$ %.2f\n", c);

    return 0;
}
