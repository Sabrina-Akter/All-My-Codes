#include<stdio.h>
#include<math.h>

int main()
{
    int n, day, hour, minute, second;
    scanf("%d", &n);
    day = n/86400;
    hour = (n%86400)/3600;
    minute = ((n%86400)%3600)/60;
    second = ((n%86400)%3600)%60;
    printf("Time in \"ddd:hh:mm:ss\" is: %d:%d:%d:%d", day, hour, minute, second);
    return 0;
}
