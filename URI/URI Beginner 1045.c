#include <stdio.h>
void max(double x, double y, double z);
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a, &b, &c);
    max(a,b,c);
    return 0;
}
void max(double x, double y, double z)
{
    double l,m,n;
    if(x>=y && x>=z)
    {
        l=x;
        m=y;
        n=z;
    }
    else if(y>=x && y>=z)
    {
        l=y;
        m=z;
        n=x;
    }
    else if(z>=y && z>=x)
    {
        l=z;
        m=y;
        n=x;
    }
    if(l >= m + n)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((l*l) == (m*m) + (n*n))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if((l*l) > (m*m) + (n*n))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((l*l) < (m*m) + (n*n))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(l == m && m == n)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((l==m && l!=n) || (l==n && l!=m) || (m==n && m!=l))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
}
