#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,z;
    scanf("%f%f", &x, &y);
    z = (y/x)*100.00;
    if(z>=70){
        printf("%.2f%%, Allowed", z);
    }
    else{
        printf("%.2f%%, Not Allowed", z);
    }
    return 0;
}
