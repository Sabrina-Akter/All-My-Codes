#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;

    long long n,a,b,c,d,e,f,g,h;

    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        scanf("%lld", &n);

        a = n*567;
        b = a/9;
        c = b + 7492;
        d = c*235;
        e = d/47;
        f = e - 498;
        g = f/10;
        h = g%10;
        if(h<0)
        {
            h = (-1)*h;
        }
        printf("%lld\n", h);
    }
    return 0;
}
