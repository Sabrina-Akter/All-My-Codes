main()
{
    float a,b;
    scanf("%f %f", &a, &b);
    if (a==1){
        printf("Total: R$ %.2f\n",(4*b));
    }
    else if (a==2){
        printf("Total: R$ %.2f\n",(4.5*b));
    }
    else if (a==3){
        printf("Total: R$ %.2f\n",(5*b));
    }
    else if (a==4){
        printf("Total: R$ %.2f\n",(2*b));
    }
    else if (a==5){
        printf("Total: R$ %.2f\n",(1.5*b));
    }
    return 0;
}
