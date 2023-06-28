#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, a, b, c, d, e, f, g;

    scanf("%d%d%d", &x, &y, &z);

    a = x+y+z;
    a = max(a,(x*y*z));
    a = max(a,(x+(y*z)));
    a = max(a,((x*y)+z));
    a = max(a,((x+y)*z));
    a = max(a,(x*(y+z)));

    printf("%d\n", a);

}
