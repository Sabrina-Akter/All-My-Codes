#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,a,b,x;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d", &a, &b);
        x = (a/3) * (b/3);
        printf("%d\n", x);
    }
    return 0;
}
