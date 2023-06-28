#include<stdio.h>
#include<math.h>

int main()
{
    int date, month, year;
    printf("Enter a date in the formate dd-mm-yy: ");
    scanf("%d%d%d", &date, &month, &year);

    if(month==1){
        printf("January", month);
    }
    else if(month==2){
        printf("February", month);
    }
    else if(month==3){
        printf("March", month);
    }
    else if(month==4){
        printf("April", month);
    }
    else if(month==5){
        printf("May", month);
    }
    else if(month==6){
        printf("June", month);
    }
    else if(month==7){
        printf("July", month);
    }
    else if(month==8){
        printf("August", month);
    }
    else if(month==9){
        printf("September", month);
    }
    else if(month==10){
        printf("October", month);
    }
    else if(month==11){
        printf("November", month);
    }
    else if(month==12){
        printf("December", month);
    }

    if(date==1 || date==21 || date==31){
        printf(" %dst,", date);
    }
    else if(date==2 || date==22){
        printf(" %dnd,", date);
    }
    else if(date==3 || date==23){
        printf(" %drd,", date);
    }
    else{
        printf(" %dth,", date);
    }
    printf(" %d", year);
    return 0;
}
