#include <stdio.h>

int main()
{
    int i;
    float Physics, Chemistry, Biology, Mathematics, Computer, total, average;

    printf("Enter the marks of Physics: ");
    scanf("%f", &Physics);

    printf("\nEnter the marks of Chemistry: ");
    scanf("%f", &Chemistry);

    printf("\nEnter the marks of Biology: ");
    scanf("%f", &Biology);

    printf("\nEnter the marks of Mathematics: ");
    scanf("%f", &Mathematics);

    printf("\nEnter the marks of Computer: ");
    scanf("%f", &Computer);

    total = Physics+Chemistry+Biology+Mathematics+Computer;
    average = total/5.00;
    printf("\nAverage=%.2f", average);

    if(average>=90)
    {
        printf("\nResult: Grade A.");
    }
    else if(average>=80)
    {
        printf("\nResult: Grade B.");
    }
    else if(average>=70)
    {
        printf("\nResult: Grade C.");
    }
    else if(average>=60)
    {
        printf("\nResult: Grade D.");
    }
    else if(average>=40)
    {
        printf("\nResult: Grade E.");
    }
    else if(average<40)
    {
        printf("\nResult: Grade F.");
    }
    return 0;
}
