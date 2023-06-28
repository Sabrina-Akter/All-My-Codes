#include <stdio.h>

int main()
{
    float x,y;
    int n,a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2,g1,g2,h1,h2,i1,i2,j1,j2,k1,k2,l1,l2;

    scanf("%f", &x);

    y = x*100.00;

    n = y;



    if(n>=10000)
    {
        a1 = n/10000;
        a2 = n % 10000;
    }
    else
    {
        a1 = 0;
        a2 = n;
    }
    if(a2>=5000)
    {
        b1 = a2/5000;
        b2 = a2%5000;
    }
    else
    {
        b1 = 0;
        b2 = a2;
    }
    if(b2>=2000)
    {
        c1 = b2/2000;
        c2 = b2%2000;
    }
    else
    {
        c1 = 0;
        c2 = b2;
    }
    if(c2>=1000)
    {
        d1 = c2/1000;
        d2 = c2%1000;
    }
    else
    {
        d1 = 0;
        d2 = c2;
    }
    if(d2>=500)
    {
        e1 = d2/500;
        e2 = d2%500;
    }
    else
    {
        e1 = 0;
        e2 = d2;
    }
    if(e2>=200)
    {
        f1 = e2/200;
        f2 = e2%200;
    }
    else
    {
        f1 = 0;
        f2 = e2;
    }
    if(f2>=100)
    {
        g1 = f2/100;
        g2 = f2%100;
    }
    else
    {
        g1 = 0;
        g2 = f2;
    }
    if(g2>=50)
    {
        h1 = g2/50;
        h2 = g2%50;
    }
    else
    {
        h1 = 0;
        h2 = g2;
    }
    if(h2>=25)
    {
        i1 = h2/25;
        i2 = h2%25;
    }
    else
    {
        i1 = 0;
        i2 = h2;
    }
    if(i2>=10)
    {
        j1 = i2/10;
        j2 = i2%10;
    }
    else
    {
        j1 = 0;
        j2 = i2;
    }
    if(j2>=5)
    {
        k1 = j2/5;
        k2 = j2%5;
    }
    else
    {
        k1 = 0;
        k2 = j2;
    }
    if(k2>=1)
    {
        l1 = k2/1;
        l2 = k2%1;
    }
    else
    {
        l1 = 0;
        l2 = k2;
    }

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a1);
    printf("%d nota(s) de R$ 50.00\n", b1);
    printf("%d nota(s) de R$ 20.00\n", c1);
    printf("%d nota(s) de R$ 10.00\n", d1);
    printf("%d nota(s) de R$ 5.00\n", e1);
    printf("%d nota(s) de R$ 2.00\n", f1);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g1);
    printf("%d moeda(s) de R$ 0.50\n", h1);
    printf("%d moeda(s) de R$ 0.25\n", i1);
    printf("%d moeda(s) de R$ 0.10\n", j1);
    printf("%d moeda(s) de R$ 0.05\n", k1);
    printf("%d moeda(s) de R$ 0.01\n", l1);

    return 0;
}

