#include<stdio.h>

int main()
{
    float gross, basic, net;
    scanf("%f", &basic);
    if (basic>10000){
        gross = basic + (.5*basic) + 500;
        net = gross - (.07*gross);
        printf("gross=%f and net=%f", gross, net);
    }
    else {
        gross = basic + (.5*basic) + 500;
        printf("gross=%f", gross);
    }
}
