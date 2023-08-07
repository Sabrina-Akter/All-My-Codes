main()
{
    float X, Y, Z, Total, Average;
    printf("Marks of the students X,Y & Z are:");
    scanf("%f %f %f", &X, &Y, &Z);
    Total=X+Y+Z;
    Average=Total/3;
    printf("Total Marks= %0.2f\n", Total);
    printf("Average Marks= %0.2f", Average);
    return 0;


}
