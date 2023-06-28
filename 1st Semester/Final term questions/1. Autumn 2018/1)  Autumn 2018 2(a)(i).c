#include<stdio.h>

double process(int x, float y, float z)
{
    double n;
    n = x+y+z;
    return n;
}
//Write up to here in exam.

int main()
{
    int a;
    float b,c;
    scanf("%d%f%f", &a, &b, &c);
    printf("%lf", process(a,b,c));
    return 0;
}
