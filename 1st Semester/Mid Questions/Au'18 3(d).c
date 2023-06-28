#include<stdio.h>
#include<math.h>

int main()
{
    int year;
    scanf("%d", &year);
    if(year%4==0 && year%100!=0){
        printf("%d is a leap year.", year);
    }
    else if(year%400==0){
        printf("%d is a leap year.", year);
    }
    else{
        printf("%d is a not a leap year.", year);
    }
    return 0;
}
