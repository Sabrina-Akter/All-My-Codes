#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    double a,b,sum,x;
    scanf("%d", &t);
    int ar[t];
    for(i=0;i<t;i++)
    {
        scanf("%d", &ar[i]);
    }
    sort(ar,ar+t);
    sum = ar[0];
    for(i=0;i<t-1;i++)
    {
        sum = (sum + ar[i+1])/2.0;
    }
    printf("%.1lf\n", sum);
}
