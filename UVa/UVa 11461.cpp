#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i;
    while(scanf("%d%d", &a, &b)==2)
    {
        int n = 0;
        if(a==0 && b==0)
        {
            break;
        }
        for(i=a;i<=b;i++)
        {
            double f, d = sqrt(i);
            f = floor(d);
            if(d/f==1.00)
            {
                n++;
            }
        }
        cout << n << endl;
    }
    return 0;
}
