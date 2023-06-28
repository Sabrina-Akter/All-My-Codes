#include <stdio.h>
#include <math.h>

struct date
{
    int day, month, year;
};

int main()
{
    int MONTH[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int years, months, days;
    struct date person_birthday, present_date;
    person_birthday.day;
    person_birthday.month;
    person_birthday.year;
    present_date.day;
    present_date.month;
    present_date.year;

    printf("Enter present date: ");
    scanf("%d%d%d", &present_date.day, &present_date.month, &present_date.year);
    printf("\nEnter  birth date: ");
    scanf("%d%d%d", &person_birthday.day, &person_birthday.month, &person_birthday.year);

    if(person_birthday.month>present_date.month)
    {
        months = (12-person_birthday.month) + present_date.month;
        years = present_date.year - person_birthday.year;
    }
    if(person_birthday.day>present_date.day)
    {
        days = ((MONTH[months - 1]) - present_date.day) + person_birthday.day;
    }

    days = present_date.day - person_birthday.day;
    months = present_date.month - person_birthday.month;
    years = present_date.year - person_birthday.year;


    printf("Years:Months:Days = %d:%d:%d", years, months, days);
    return 0;
}
