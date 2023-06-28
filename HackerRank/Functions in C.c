#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int h;
    if(a>=b && a>=c && a>=d)
    {
        h = a;
    }
    else if(b>=a && b>=c && b>=d)
    {
        h = b;
    }
    else if(c>=a && c>=b && c>=d)
    {
        h = c;
    }
    else if(d>=a && d>=b && d>=c)
    {
        h = d;
    }
    return h;
}

int main()
{
    int w,x,y,z,ans;

    scanf("%d%d%d%d", &w, &x, &y, &z);

    ans = max_of_four(w, x, y, z);

    printf("%d\n", ans);

    return 0;
}


