#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,p,c=0,i;
    while(scanf("%d", &n)==1)
    {
        p = 1;
        x = 0;
        c++;
        if(n<0)
        {
            break;
        }
        for(i=1;i<=n;i++)
        {
            p = p * 2;
            if(n==1)
            {
                break;
            }
            x++;
            if(p>=n)
            {
                break;
            }
        }
        cout << "Case " << c << ": " << x << endl;
    }
    return 0;
}
