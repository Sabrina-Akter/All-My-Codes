#include<stdio.h>
int main()
{
    int x,y,n;
    x = 10;
    y = 20;
    scanf("%d", &n);
    if(n>0){
            x=x-5;
            y=y+7;
    }
    printf("x=%d and y=%d", x, y);
    return 0;
}
