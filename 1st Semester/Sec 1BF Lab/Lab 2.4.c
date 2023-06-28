#include<stdio.h>
#include<math.h>

int main()
{
    float Gross_pay, Net_pay, Hours, Rate, Tax;

    printf("Enter per hour rate of the employee: ");
    scanf("%f", &Rate);
    printf("\nEnter worked hours: ");
    scanf("%f", &Hours);

    Gross_pay = Hours*Rate;
    printf("\nGross pay = %.2f Taka", Gross_pay);
    if(Gross_pay>5000){
        Tax = (0.05*Gross_pay);
        Net_pay = Gross_pay - Tax;
        printf("\nNet pay = %.2f Taka", Net_pay);
    }
    return 0;
}
