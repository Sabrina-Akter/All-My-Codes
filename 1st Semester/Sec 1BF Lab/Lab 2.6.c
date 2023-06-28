#include<stdio.h>
#include<math.h>

int main()
{
    char name[30];
    float unit, charge;
    printf("Name of the  user: ");
    scanf("%s", name);
    printf("Total units of electricity used by the user: ");
    scanf("%f", &unit);
    if(unit<=100){
        charge = 1.75*100;
    }
    else if(unit>100 && unit<=300){
        charge = 175 + (2.25*200);
    }
    else if(unit>300){
        charge = 625 + (3.5*300);
    }
    printf("Charge = %.2f", charge);
    return 0;
}

