#include<stdio.h>

int main()
{
    int leap_year;
    printf("Enter a year: ");
    scanf("%d", &leap_year);
    if((leap_year%4==0 && leap_year%100!=0) || leap_year%400==0){
        printf("This is a leap year.");
    }
    else{
        printf("This is not a leap year.");
    }
    return 0;
}
