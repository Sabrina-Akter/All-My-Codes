#include<stdio.h>
#include<math.h>

int main()
{
    int score;

    printf("Enter  the score of a student: ");
    scanf("%d", &score);

    if(score>=80 && score<=100){
        printf("Grade = A");
    }
    else if(score>=65 && score<=79){
        printf("Grade = B");
    }
    else if(score>=50 && score<=64){
        printf("Grade = C");
    }
    else if(score>=40 && score<=49){
        printf("Grade = D");
    }
    else{
        printf("Grade = F");
    }
    return 0;
}
