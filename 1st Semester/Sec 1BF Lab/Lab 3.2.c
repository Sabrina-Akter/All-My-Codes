#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float N,i, sum=0;
    printf("Enter the amount of numbers you want to input: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%f", &N);
        sum = sum + N;
    }
    printf("The sum of the given %d numbers is %.2f.\n", n, sum);
    printf("The average of the given %d numbers is %.2f.\n", n, sum/n);
    return 0;
}
